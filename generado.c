#include <assert.h>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>


int __taskid = -1, __numprocs = -1;

int main(int argc, char **argv) {
    int xx = 2;

MPI_Init(&argc, &argv);
MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
Declare_MPI_Types();

if (__taskid == 0) { 
}
	MPI_Bcast(&xx, 1, MPI_INT, 0, MPI_COMM_WORLD);

}
MPI_Finalize();
}
