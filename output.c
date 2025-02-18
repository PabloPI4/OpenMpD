#include <assert.h>
#include <mpi.h>
#include <stdio.h>

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
int main() {
    int *valores;

	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
    fprintf(stderr, "prueba\n");

}
	        {
	        if ((valores = (int *) malloc(sizeof(int) * 8)) == NULL) {
	            fprintf(stderr, "error de asignacion de memoria dinamica\n");
	            exit(2);
	        }

int __iter;
int __start;
int __end;
__iter = (((8) - (0)) / __numprocs);
if (__taskid < (((8) - (0)) % __numprocs))
	__iter++;
__start = ((0) + __iter * __taskid);
if (__taskid >= (((8) - (0)) % __numprocs))
	__start += (((8) - (0)) % __numprocs);
__end = __start + __iter;
if (__taskid == (__numprocs - 1)) assert(__end == (8));

	for (int __distrib = __start; __distrib < __end; __distrib++){
	            valores[__distrib] = valores[__distrib]  + __distrib;
	        }
	    }
{
	int __chunk;
	int *__displs = (int *) malloc(sizeof(int) * __numprocs);
	int *__counts = (int *) malloc(sizeof(int) * __numprocs);
	int *__valoresAux;
	__chunk = (8 / __numprocs);
	__displs[__taskid] = __chunk*__taskid;

	if (__taskid < (8 % __numprocs)) {
		__counts[__taskid] = (__chunk + 1);
		__displs[__taskid] += __taskid;
	}
	else {
		__counts[__taskid] = __chunk;
		__displs[__taskid] += (8 % __numprocs);
	}

	if (__taskid == 0) {
		__displs[0] = 0;

		for (int __gather = 1; __gather < __numprocs; __gather++) {
			if (__gather < (8 % __numprocs)) {
				__counts[__gather] = (__chunk + 1);
				__displs[__gather] = __displs[__gather - 1] + (__chunk + 1);
			}
			else if (__gather == (8 % __numprocs)) {
				__counts[__gather] = __chunk;
				__displs[__gather] = __displs[__gather - 1] + (__chunk + 1);
			}
			else {
				__counts[__gather] = __chunk;
				__displs[__gather] = __displs[__gather - 1] + __chunk;
			}
		}

		assert((__displs[__numprocs - 1] + __counts[__numprocs - 1]) == 8);
		__valoresAux = (int *) malloc(sizeof(int)*8);
	}

	MPI_Gatherv(valores+__displs[__taskid], __counts[__taskid], MPI_INT, __valoresAux, __counts, __displs, MPI_INT, 0, MPI_COMM_WORLD);
	if (__taskid == 0) {
		memcpy(valores, __valoresAux, sizeof(int)*8);
	}
}

if (__taskid == 0) {

	    for (int i = 0; i < 8; i++) {
	        fprintf(stderr, "valores[%d] = %d\n", i, valores[i]);
	    }

}
	MPI_Finalize();
    return 0;
}


void DeclareTypesMPI() {
}
