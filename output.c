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

}
if (__taskid != 0) {
	x = (int *) malloc(10 * sizeof(int ));
}

	        {
{
int __iter;
int __start;
int __end;
__iter = __numprocs * 1;
__start = 0 + __taskid * 1;
__end = 10;

	for (int __distribSched = __start; __distribSched < __end; __distribSched += __iter) {
	for (int __distrib = __distribSched; __distrib < __distribSched + 1; __distrib++){if(__distrib >= __end) {continue;}
	            x[__distrib] = __distrib;
	        }
	}
}
	    }
{
	int __offset = 0;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	int *__xAux;
	if (__taskid == 0) {
		__xAux = (int *) malloc(sizeof(int)*10);
	}

	while (__offset < 10) {
		if (__taskid == 0) {
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
		}
		else {
			if (__offset + __taskid*1 < 10) {
				__counts[__taskid] = 1;
				__displs[__taskid] = __offset + __taskid*1;
				__offset += __numprocs*1;
			}
			else {
				__counts[__taskid] = 0;
				__displs[__taskid] = 10;
				__offset += __numprocs*1;
			}
		}

		MPI_Gatherv(x+__displs[__taskid], __counts[__taskid], MPI_INT, __xAux, __counts, __displs, MPI_INT, 0, MPI_COMM_WORLD);
	}
	if (__taskid == 0) {
		memcpy(x, __xAux, sizeof(int)*10);
	}
}

if (__taskid == 0) {

	    for (int i = 0; i < 10; i++) {
	        fprintf(stderr, "en 0, x[%d] = %d\n", i, x[i]);
	    }
}
	MPI_Finalize();
}

void DeclareTypesMPI() {
}
