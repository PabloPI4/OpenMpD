#include <string.h>
#include <assert.h>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
int main() {
    int *x;

	MPI_Init(NULL , NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
    x = (int *) malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        x[i] = i;
    }

}
if (__taskid != 0) {
	x = (int *) malloc(10 * sizeof(int ));
}

	        {
int __iter;
int __start;
int __end;
__iter = (((10) - (0)) / __numprocs);
if (__taskid < (((10) - (0)) % __numprocs))
	__iter++;
__start = ((0) + __iter * __taskid);
if (__taskid >= (((10) - (0)) % __numprocs))
	__start += (((10) - (0)) % __numprocs);
__end = __start + __iter;
if (__taskid == (__numprocs - 1)) assert(__end == (10));

	for (int __distrib = __start; __distrib < __end; __distrib++){
	            fprintf(stderr, "x[%d] = %d\n", __distrib, x[__distrib]);
	        }
	    }
{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	int *__xAux = (int *) malloc(sizeof(int)*10);

	while (__offset < 10) {
		for (int __gather = 0; __gather < __numprocs; __gather++) {
			if (__offset < 10) {
				__counts[__gather] = 1;
				__displs[__gather] = __offset;
				__offset += 1;
			}
			else {
				__counts[__gather] = 0;
				__displs[__gather] = 10;
			}
		}
		MPI_Allgatherv(x+__displs[__taskid], __counts[__taskid], MPI_INT, __xAux, __counts, __displs, MPI_INT, MPI_COMM_WORLD);
	}
		memcpy(x, __xAux, sizeof(int)*10);
}

if (__taskid == 0) {

}
	MPI_Finalize();
    return 0;
}


void DeclareTypesMPI() {
}
