#include <assert.h>
#include <mpi.h>
#include <omp.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>


#define NUM_THREADS 8


    int unsigned long static num_steps = (unsigned long int)((1<<30)-1) ;
    double step;


int __taskid = -1, __numprocs = -1;



void piHola() {
	printf("hola");
}
int main (int argc, char** argv) { 
    unsigned int i;
    double pi;
    double PI25DT = 3.141592653589793238462643;
    double x;
    double sum=0.0;
    int factor=1;
    int **valores;

    struct timeval t1, t2;
    double segundos;

MPI_Init(&argc, &argv);
MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
Declare_MPI_Types();

if (__taskid == 0) { 
    piHola();

    if (argc == 1) {
        printf("num_steps %ld, Â¿Factor de escala (1..4)?\n", num_steps);
        if (scanf("%d", &factor) <= 0)
	    printf("scanf error, factor sin cambio %d\n", factor);
    }
    else factor = atoi(argv[1]);

    num_steps = num_steps * factor;

    printf("%ld num_steps, %25.23f step size i: %ld size num_steps: %ld\n", num_steps, (double)1.0/(double) num_steps, sizeof(i), sizeof(num_steps));
gettimeofday(&t1, NULL);

step = 1.0/(double) num_steps;

}
if (__taskid != 0) {
	valores = (int **) malloc(3 * sizeof(int *));
		for (int __alloc0 = 0; __alloc0 < 8; __alloc0++) {
			valores[__alloc0] = (int *) malloc(8 * sizeof(int ));
	}
}

	MPI_Bcast(&num_steps, 1, MPI_UNSIGNED_LONG, 0, MPI_COMM_WORLD);
	MPI_Bcast(&step, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);

int __iter;
int __start;
int __end;
__iter = (( - ) / __numprocs);
__start = (+ __iter * __taskid) ;
if (__taskid >= ((-) % __numprocs)) { __start += ((-) % __numprocs);}
__end = __start + __iter;
if (__taskid == (__numprocs-1)) assert (__end == num_steps);
#pragma omp parallel for simd private(x) reduction(+:sum)
for (i=__start;i< __end; i++) {
for (i=0;i< num_steps; i++) {
    x = (i+0.5)*step;
    sum += 4.0/(1.0+x*x);
}

pi = step * sum;

gettimeofday(&t2, NULL);
segundos = (((t2.tv_usec - t1.tv_usec)/1000000.0f)  + (t2.tv_sec - t1.tv_sec));

printf("Pi %25.23f, calc con %ld pasos en %f segundos\n", pi,num_steps,segundos);
printf("Pi es %25.23f, Error relativo %10.8e\n", PI25DT, (double)100 * (pi - PI25DT)/PI25DT);

}
MPI_Finalize();
return(0);
}
