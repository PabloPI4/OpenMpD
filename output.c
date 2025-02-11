#include <assert.h>
#include <mpi.h>
#include <omp.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>


#define NUM_THREADS 8


void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
    int unsigned long static num_steps = (unsigned long int)((1<<30)-1) ;
    double step;

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

	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
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
MPI_Bcast(&num_steps, 1, MPI_UNSIGNED_LONG, 0, MPI_COMM_WORLD);
MPI_Bcast(&step, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);


	{
int __iter;
int __start;
int __end;
__iter = ((( num_steps) - (0)) / __numprocs);
if (__taskid < ((( num_steps) - (0)) % __numprocs))
	__iter++;
__start = ((0) + __iter * __taskid);
if (__taskid >= ((( num_steps) - (0)) % __numprocs))
	__start += ((( num_steps) - (0)) % __numprocs);
__end = __start + __iter;
if (__taskid == (__numprocs - 1)) assert(__end == ( num_steps));

#pragma omp parallel for simd private(x) reduction(+:sum, sum)
	for (int __distrib = __start; __distrib < __end;  __distrib++) {
	    x = (__distrib+0.5)*step;
	    sum += 4.0/(1.0+x*x);
	}

double __sum;
MPI_Allreduce(&sum, &__sum, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
sum = __sum;
double __sum;
MPI_Allreduce(&sum, &__sum, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
sum = __sum;


	pi = step * sum;
	}

double __sum;
MPI_Reduce(&sum, &__sum, 1, MPI_DOUBLE, MPI_MAX, 0, MPI_COMM_WORLD);
if (__taskid == 0) { sum = __sum; }
double __sum;
MPI_Reduce(&sum, &__sum, 1, MPI_DOUBLE, MPI_MAX, 0, MPI_COMM_WORLD);
if (__taskid == 0) { sum = __sum; }
double __sum;
MPI_Reduce(&sum, &__sum, 1, MPI_DOUBLE, MPI_PROD, 0, MPI_COMM_WORLD);
if (__taskid == 0) { sum = __sum; }

{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);

	while (__offset < 10*5) {
		if (__taskid == 0) {
			for (int __gather = 0; __gather < __numprocs; __gather++) {
				if (__offset < 10*5) {
					__counts[__gather] = 2;
					__displs[__gather] = __offset;
					__offset += 2;
				}
				else {
					__counts[__gather] = 0;
					__displs[__gather] = 10*5;
				}
			}
		}
		else {
			if (__offset + __taskid*2 < 10*5) {
				__counts[__taskid] = 2;
				__displs[__taskid] = __offset + __taskid*2;
				__offset += __numprocs*2;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = 10*5;
				__offset += __numprocs*2;
			}
		}

		MPI_Gatherv(valores+__displs[__taskid], __counts[__taskid], MPI_INT, valores, __counts, __displs, MPI_INT, 0, MPI_COMM_WORLD);
	}
}

{
	int __chunk;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	__chunk = (10 / __numprocs);
	__displs[__taskid] = __chunk*__taskid*5;

	if (__taskid < (10 % __numprocs)) {
		__counts[__taskid] = (__chunk + 1)*5;
		__displs[__taskid] += __taskid*5;
	}
	else {
		__counts[__taskid] = __chunk*5;
		__displs[__taskid] += (10 % __numprocs)*5;
	}

	if (__taskid == 0) {
		__displs[0] = 0;

		for (int __gather = 1; __gather < __numprocs; __gather++) {
			if (__gather < (10 % __numprocs)) {
				__counts[__gather] = (__chunk + 1)*5;
				__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)*5;
			}
			else if (__gather == (10 % __numprocs)) {
				__counts[__gather] = __chunk*5;
				__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)*5;
			}
			else {
				__counts[__gather] = __chunk*5;
				__displs[__gather] = __displs[__gather - 1] + __chunk*5;
			}
		}

		assert((__displs[__numprocs - 1] + counts[__numprocs - 1]) == 10*5);
	}

	MPI_Gatherv(valores+__displs[__taskid], counts[__taskid], MPI_INT, valores, __counts, __displs, MPI_INT, 0, MPI_COMM_WORLD);
}

if (__taskid == 0) {

	gettimeofday(&t2, NULL);
	segundos = (((t2.tv_usec - t1.tv_usec)/1000000.0f)  + (t2.tv_sec - t1.tv_sec));


	printf("Pi %25.23f, calc con %ld pasos en %f segundos\n", pi,num_steps,segundos);
	printf("Pi es %25.23f, Error relativo %10.8e\n", PI25DT, (double)100 * (pi - PI25DT)/PI25DT);

}
	MPI_Finalize();
}

void DeclareTypesMPI() {
}
