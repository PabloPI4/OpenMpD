#include <string.h>
#include <assert.h>
#include <mpi.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <sys/time.h>


#define BACK_SIZE N2+1
#define GO_SIZE 1

#define WORKING		100
#define END		10
#define MAGIC		63

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
void imprimeMat (int cM, float mat[][cM], int F, int C){
    int i, j;
if (__taskid == 0) {
    for (i=0; i<F; i++) {
        for (j=0; j<C; j++) {
	    printf(" %4f ", mat[i][j]);
	}
	printf("\n");
    }
}
}

void inicializarMatriz (int F, int C, float mat[F][C]){
    int i, j;
if (__taskid == 0) {
    for (i=0; i<F; i++) 
        for (j=0; j<C; j++) 
  	    mat[i][j] = (i*F+j) % MAGIC;
}
}

void Mult_ikj(int fA, int cA, int cB, float matA[fA][cA], float matB[cA][cB], float matC[fA][cB]) {
     float r;
     int i,j,k;
     int cC = cB; 
     int fC = fA; 
     int fB = cA;
     
     
     
     










MPI_Bcast(&fA, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&cA, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&fB, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&cB, 1, MPI_INT, 0, MPI_COMM_WORLD);

{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	float *__matAAux;
	if (__taskid == 0) {
		__matAAux = (float *) malloc(sizeof(float)*fA*cA);
		memcpy(__matAAux, matA, sizeof(float)*fA*cA);
	}

	while (__offset < fA*cA) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < fA*cA) {
					__counts[__gather] = cA;
					__displs[__gather] = __offset;
					__offset += cA;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = fA*cA;
				}
			}
		}
		else {
			if (__offset + __taskid*cA < fA*cA) {
				__counts[__taskid] = cA;
				__displs[__taskid] = __offset + __taskid*cA;
				__offset += __numprocs*cA;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = fA*cA;
				__offset += __numprocs*cA;
			}
		}

		MPI_Scatterv(__matAAux, __counts, __displs, MPI_FLOAT, matA+__displs[__taskid], __counts[__taskid], MPI_FLOAT, 0, MPI_COMM_WORLD);
	}
}

MPI_Bcast(matB, fB*cB, MPI_FLOAT, 0, MPI_COMM_WORLD);

{
int __iter;
int __start;
int __end;
__iter = __numprocs * 1;
__start = 0 + __taskid * 1;
__end = fC;

#pragma omp parallel for private(r)
	for (int __distribSched = __start; __distribSched < __end; __distribSched += __iter) {
	for (int __distrib = __distribSched; __distrib < __distribSched + 1; __distrib++){if(__distrib >= __end) {continue;}
	        for (k=0; k<cC; k++) {
	          r = matA[__distrib][k];
	          for (j=0; j<cB; j++)
	               matC[__distrib][j] += r * matB[k][j];

	        }
	    }
{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	float *__matCAux;
	if (__taskid == 0) {
		__matCAux = (float *) malloc(sizeof(float)*fA*cB);
	}

	while (__offset < fA*cB) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < fA*cB) {
					__counts[__gather] = cB;
					__displs[__gather] = __offset;
					__offset += cB;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = fA*cB;
				}
			}
		}
		else {
			if (__offset + __taskid*cB < fA*cB) {
				__counts[__taskid] = cB;
				__displs[__taskid] = __offset + __taskid*cB;
				__offset += __numprocs*cB;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = fA*cB;
				__offset += __numprocs*cB;
			}
		}

		MPI_Gatherv(matC+__displs[__taskid], __counts[__taskid], MPI_FLOAT, __matCAux, __counts, __displs, MPI_FLOAT, 0, MPI_COMM_WORLD);
	}
	if (__taskid == 0) {
		memcpy(matC, __matCAux, sizeof(float)*fA*cB);
	}
}

if (__taskid == 0) {
	}
}
}
	}

	void Mult_ijk(int fA, int cA, int cB, float matA[fA][cA], float matB[cA][cB],
	float matC[fA][cB]) {
	    float result;
	    int i,j,k;
	    int cC = cB; 
	    int fC = fA; 
	    int fB = cA; 




MPI_Bcast(&fA, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&cA, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&fB, 1, MPI_INT, 0, MPI_COMM_WORLD);
MPI_Bcast(&cB, 1, MPI_INT, 0, MPI_COMM_WORLD);

{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	float *__matAAux;
	if (__taskid == 0) {
		__matAAux = (float *) malloc(sizeof(float)*fA*cA);
		memcpy(__matAAux, matA, sizeof(float)*fA*cA);
	}

	while (__offset < fA*cA) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < fA*cA) {
					__counts[__gather] = cA;
					__displs[__gather] = __offset;
					__offset += cA;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = fA*cA;
				}
			}
		}
		else {
			if (__offset + __taskid*cA < fA*cA) {
				__counts[__taskid] = cA;
				__displs[__taskid] = __offset + __taskid*cA;
				__offset += __numprocs*cA;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = fA*cA;
				__offset += __numprocs*cA;
			}
		}

		MPI_Scatterv(__matAAux, __counts, __displs, MPI_FLOAT, matA+__displs[__taskid], __counts[__taskid], MPI_FLOAT, 0, MPI_COMM_WORLD);
	}
}

MPI_Bcast(matB, fB*cB, MPI_FLOAT, 0, MPI_COMM_WORLD);

{
int __iter;
int __start;
int __end;
__iter = __numprocs * 1;
__start = 0 + __taskid * 1;
__end = fC;

#pragma omp parallel for private(result)
	for (int __distribSched = __start; __distribSched < __end; __distribSched += __iter) {
	for (int __distrib = __distribSched; __distrib < __distribSched + 1; __distrib++){if(__distrib >= __end) {continue;}
	        for (j=0; j<cC; j++) {
	            result = 0;
	            for (k=0; k<cA; k++) {
	                result += matA[__distrib][k] * matB[k][j];
	            }
	            matC[__distrib][j] = result;
	        }
	    }
{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	float *__matCAux;
	if (__taskid == 0) {
		__matCAux = (float *) malloc(sizeof(float)*fA*cB);
	}

	while (__offset < fA*cB) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < fA*cB) {
					__counts[__gather] = cB;
					__displs[__gather] = __offset;
					__offset += cB;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = fA*cB;
				}
			}
		}
		else {
			if (__offset + __taskid*cB < fA*cB) {
				__counts[__taskid] = cB;
				__displs[__taskid] = __offset + __taskid*cB;
				__offset += __numprocs*cB;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = fA*cB;
				__offset += __numprocs*cB;
			}
		}

		MPI_Gatherv(matC+__displs[__taskid], __counts[__taskid], MPI_FLOAT, __matCAux, __counts, __displs, MPI_FLOAT, 0, MPI_COMM_WORLD);
	}
	if (__taskid == 0) {
		memcpy(matC, __matCAux, sizeof(float)*fA*cB);
	}
}

if (__taskid == 0) {
	}
}
}
	}


	int main (int argc, char* argv[])
	{
	    int result;
	    int F1, C1, F2, C2;
	    int i, j, k;
	    struct timeval t, t2;
	    double segundos;


	MPI_Init(NULL , NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
	    	if ((argc != 4) && (argc != 5)) {
	            printf("Introduce las dimensiones de la matriz A: M x N (separadas por un blanco\n");
	            if (scanf("%d %d",&F1, &C1) <= 0)
			    printf("Error al leer las dimensiones de A\n");
	            printf("Introduce las dimensiones de la matriz B: M x N (separadas por un blanco\n");
	            if (scanf("%d %d",&F2, &C2) <= 0)
			    printf("Error al leer las dimensiones de A\n");
		}
		else if (argc == 4) {
	           F1=atoi(argv[1]); 
	           C1=atoi(argv[2]); 
	           C2=atoi(argv[3]); 
	           F2=C1;            
		} 
	        else if (argc == 5) {	
	           F1=atoi(argv[1]); 
	           C1=atoi(argv[2]); 
	           F2=atoi(argv[3]); 
	           C2=atoi(argv[4]); 
	           if (C1 != F2)
		       printf("Las dimensiones están mal, N1 debe ser igual a M2\n");

		}

		printf("Producto A(%d, %d) x B(%d, %d)\n", F1, C1, F2, C2);

}
	    float (*matA)[C1] =     calloc(F1,C1*sizeof(float)); 
if(__taskid == 0){
}
	    float (*matB)[C2] =     calloc(F2,C2*sizeof(float)); 
if(__taskid == 0){
}
	    float (*matC)[C2] =     calloc(F1,C2*sizeof(float)); 
if(__taskid == 0){
}
	    float (*matC_ikj)[C2] = calloc(F1,C2*sizeof(float)); 
if(__taskid == 0){
}
	    inicializarMatriz (F1, C1, matA);
if(__taskid == 0) {
}
	    inicializarMatriz (F2, C2, matB);
if(__taskid == 0) {

	    gettimeofday(&t, NULL);
}
	    Mult_ijk(F1, C1, C2, matA, matB, matC);
if(__taskid == 0) {
	    gettimeofday(&t2, NULL);
	    segundos = (((t2.tv_usec - t.tv_usec)/1000000.0f)  + (t2.tv_sec - t.tv_sec));
	    printf("Total time using ijk was %f seconds\n", segundos);
	    
	    gettimeofday(&t, NULL);
}
	    Mult_ikj(F1, C1, C2, matA, matB, matC_ikj);
if(__taskid == 0) {
	    gettimeofday(&t2, NULL);
	    segundos = (((t2.tv_usec - t.tv_usec)/1000000.0f)  + (t2.tv_sec - t.tv_sec));
	    printf("Total time using ikj was %f seconds\n", segundos);
	    

}
		int wrong = 0;
if(__taskid == 0){
	        for (i=0; i<F1; i++) {
	            for (j=0; j<C2; j++) {
	                result = 0;
	                for (k=0; k<C1; k++) {
	                    result += matA[i][k] * matB[k][j];
	                }
	                if (matC[i][j] != result)
			    wrong = 1;
	                if (matC_ikj[i][j] != result)
			    wrong = 2;
	            }
	        } 
		if (wrong == 1)
		    printf("Test Failed in ijk!!\n");
		else if (wrong == 2)
		    printf("Test Failed in ikj!!!\n");
		else printf("Test Passed!!!\n");

	    if (F1<10){ 
	      printf("\nValores de la matriz A\n");
}
	      imprimeMat(C2, matA, 4, 5);
if(__taskid == 0) {
	      printf("\nValores de la matriz B\n");
}
	      imprimeMat(C2, matB, 5, 3);
if(__taskid == 0) {
	      printf("\nValores de la matriz C\n");
}
	      imprimeMat(C2, matC, 4, 3);
if(__taskid == 0) {
	    }
	 
}
	MPI_Finalize();
    return(0);
}

void DeclareTypesMPI() {
}
