                   
#include <assert.h>
#include <mpi.h>
void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
int main() {
    int *valores;

	MPI_Init(NULL , NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
    valores = (int *) malloc(sizeof(int) * 10);

}
if (__taskid != 0) {
	valores = (int *) malloc(10 * sizeof(int ));
}

	        {
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

#pragma omp simd collapse(x)
	for (int __distrib = __start; __distrib < __end; __distrib++){
	            valores[__distrib] = __distrib;
	        }
}
	    }
if (__taskid == 0) {
}
	MPI_Finalize();
}

void DeclareTypesMPI() {
}
