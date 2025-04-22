#include <string.h>
#include <assert.h>
#include <mpi.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<omp.h>
#include<complex.h>
#include<tgmath.h>
#include <sys/time.h>

#define DIM 4096

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
typedef struct{
	unsigned char bl,gr,re;
} color;
MPI_Datatype color_type_MPI;

void tga_write ( int w, int h, color rgb[], char *filename );

color fcolor(int iter,int num_its){
        color c;


if (__taskid == 0) {
        c.re = 255;
        c.gr = (iter*20)%255;
        c.bl = (iter*20)%255;
}
        return c;
}

int explode (float _Complex z0, float _Complex c, float radius, int n)
{
int k=1;
float modul;

if (__taskid == 0) {
z0 = (z0*z0)+c;
modul = cabsf(z0);

while ((k<=n) && (modul<=radius)){ 
		z0 = (z0*z0)+c;
		modul = cabsf(z0);
                k++;
}
}
return k;
}

float _Complex mapPoint(int width,int height,float radius,int x,int y){
	float _Complex c;
	int l = (width<height)?width:height;
	float re = 2*radius*(x - width/2.0)/l;
        float im = 2*radius*(y - height/2.0)/l;
if (__taskid == 0) {
	c = re+im*I;
}
        return c;
}

color *juliaSet(int width,int height,float _Complex c,float radius,int iter){
	int x,y,i;
	float _Complex z0;
	int k=0;
	int count=0;

	color *rgb;
if (__taskid == 0) {
	rgb = calloc (width*height, sizeof(color));
 
}
MPI_Bcast(&width, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&height, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&c, 1, MPI_COMPLEX, 0, MPI_COMM_WORLD);
MPI_Bcast(&radius, 1, MPI_FLOAT, 0, MPI_COMM_WORLD);
MPI_Bcast(&iter, 1, MPI_INT, 0, MPI_COMM_WORLD);

	{
{
int __iter;
int __start;
int __end;
__iter = __numprocs * 1;
__start = 0 + __taskid * 1;
__end = height;

#pragma omp parallel for private (x,y,k,i,z0) shared(rgb,width,height)
	for (int __distribSched = __start; __distribSched < __end; __distribSched += __iter) {
	for (int __distrib = __distribSched; __distrib < __distribSched + 1; __distrib++){if(__distrib >= __end) {continue;}
			k= __distrib*width;
	#pragma omp simd
	        	for(y=0;y<width;y++){
				z0 = mapPoint(width,height,radius,__distrib,y);
				i = explode (z0, c, radius, iter);

				if (i<iter) { 
					   
					rgb[k+y] = fcolor(i,iter);
					count++;
				}
			}
		}
	}
}
	}
{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	color *__rgbAux;
	if (__taskid == 0) {
		__rgbAux = (color *) malloc(sizeof(color)*height*width);
	}

	while (__offset < height*width) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < height*width) {
					__counts[__gather] = width;
					__displs[__gather] = __offset;
					__offset += width;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = height*width;
				}
			}
		}
		else {
			if (__offset + __taskid*width < height*width) {
				__counts[__taskid] = width;
				__displs[__taskid] = __offset + __taskid*width;
				__offset += __numprocs*width;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = height*width;
				__offset += __numprocs*width;
			}
		}

		MPI_Gatherv(&rgb+__displs[__taskid], __counts[__taskid], color_type_MPI, __rgbAux, __counts, __displs, color_type_MPI, 0, MPI_COMM_WORLD);
	}
	if (__taskid == 0) {
		memcpy(rgb, __rgbAux, sizeof(color)*height*width);
	}
}

if (__taskid == 0) {
		printf("Elementos fuera de Jc %d de %d\n",count, width*height);
}
		return rgb;
	}

	int main(int argC, char* argV[])
	{
	int width, height;
	float _Complex c;
	color *rgb;

#ifdef _OPENMP
	double start_time, end_time;
#else
	struct timeval tv_start, tv_end;
	float tiempo_trans;
#endif

	 
	MPI_Init(NULL , NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
		if(argC != 6) {
			printf("Uso : %s\n", "<dim de la ventana, partes real e imaginaria de c, radio, iteraciones>");
			exit(1);
		}
		else{
			width = atoi(argV[1]);
			height = width; 
			if (width >DIM) {
	                   printf("El tamanyo de la ventana deben ser menor que 1024\n");
	                   exit(1);
	                }
			float re = atof(argV[2]);
	                float im = atof(argV[3]);

	                c=re+im*I;

		printf("JuliaSet: %d, %d, %f, %f, %f, %d\n", width, height,creal(c),cimag(c),atof(argV[4]),atoi(argV[5]));
#ifdef _OPENMP
		start_time = omp_get_wtime();
#else
		gettimeofday(&tv_start, NULL);
#endif
		rgb = juliaSet(width,height,c,atof(argV[4]), atoi(argV[5]));

#ifdef _OPENMP
		end_time = omp_get_wtime();
		printf ( "Tiempo Julia = %f segundos\n",end_time-start_time);
#else
		gettimeofday(&tv_end, NULL);
		tiempo_trans=(tv_end.tv_sec - tv_start.tv_sec) * 1000000 +
		  (tv_end.tv_usec - tv_start.tv_usec); 
		printf("Tiempo Julia = %f segundos\n", tiempo_trans/1000000);
#endif
		
		}

		tga_write ( width, height, rgb, "julia_set.tga" );

	  	printf ( "\n" );
	  	printf ( "JULIA_SET. Finalizado\n");

	  	free(rgb);

}
	MPI_Finalize();
  	return 0;
}


void tga_write ( int w, int h, color rgb[], char *filename )


{
if (__taskid == 0) {
  FILE *file_unit;
}
  unsigned char header1[12] = { 0,0,2,0,0,0,0,0,0,0,0,0 };
  unsigned char header2[6] = { w%256, w/256, h%256, h/256, 24, 0 };

if (__taskid == 0) {
  file_unit = fopen ( filename, "wb" );

  fwrite ( header1, sizeof ( unsigned char ), 12, file_unit );
  fwrite ( header2, sizeof ( unsigned char ), 6, file_unit );

  fwrite ( rgb, sizeof ( unsigned char ), 3 * w * h, file_unit );

  fclose ( file_unit );

  printf ( "\n" );
  printf ( "TGA_WRITE:\n" );
  printf ( "  Graphics data saved as '%s'\n", filename );

}
  return;
}

void DeclareTypesMPI() {
int __blocklengths_color[3];
MPI_Datatype __old_types_color[3];
MPI_Aint __disp_color[3];
MPI_Aint __lb_color;
MPI_Aint __extent_color;
__blocklengths_color[0] = 1;
__old_types_color[0] = MPI_UNSIGNED_CHAR;
MPI_Type_get_extent(MPI_UNSIGNED_CHAR, &__lb_color, &__extent_color);
__disp_color[0] = __lb_color;
__blocklengths_color[1] = 1;
__old_types_color[1] = MPI_UNSIGNED_CHAR;
__disp_color[1] = __disp_color[0] + __extent_color;
MPI_Type_get_extent(MPI_UNSIGNED_CHAR, &__lb_color, &__extent_color);
__blocklengths_color[2] = 1;
__old_types_color[2] = MPI_UNSIGNED_CHAR;
__disp_color[2] = __disp_color[1] + __extent_color;
MPI_Type_get_extent(MPI_UNSIGNED_CHAR, &__lb_color, &__extent_color);
MPI_Type_create_struct(3, __blocklengths_color, __disp_color, __old_types_color, &color_type_MPI);
MPI_Type_commit(&color_type_MPI);

}
