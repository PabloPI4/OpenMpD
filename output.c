                   
#include <assert.h>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
    typedef struct {
        int campo1;
        char campo2, campo3;
        int campo4;
    } t_pru;
MPI_Datatype t_pru_type_MPI;

int main() {
    int x = 0;

	MPI_Init(NULL, NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
    x += 8;

}
	        {
	    printf("x = %d\n", x);
	    }
if (__taskid == 0) {

}
	MPI_Finalize();
    return 0;
}


void DeclareTypesMPI() {
int __blocklengths_t_pru[4];
MPI_Datatype __old_types_t_pru[4];
MPI_Aint __disp_t_pru[4];
MPI_Aint __lb_t_pru;
MPI_Aint __extent_t_pru;
__blocklengths_t_pru[0] = sizeof(MPI_INT);
__old_types_t_pru[0] = MPI_INT;
MPI_Type_get_extent(MPI_INT, &__lb_t_pru, &__extent_t_pru);
__disp_t_pru[0] = __lb_t_pru;
__blocklengths_t_pru[1] = sizeof(MPI_CHAR);
__old_types_t_pru[1] = MPI_CHAR;
MPI_Type_get_extent(MPI_CHAR, &__lb_t_pru, &__extent_t_pru);
__disp_t_pru[1] = __disp_t_pru[0] + __extent_t_pru;
__blocklengths_t_pru[2] = sizeof(MPI_CHAR);
__old_types_t_pru[2] = MPI_CHAR;
MPI_Type_get_extent(MPI_CHAR, &__lb_t_pru, &__extent_t_pru);
__disp_t_pru[2] = __disp_t_pru[1] + __extent_t_pru;
__blocklengths_t_pru[3] = sizeof(MPI_INT);
__old_types_t_pru[3] = MPI_INT;
MPI_Type_get_extent(MPI_INT, &__lb_t_pru, &__extent_t_pru);
__disp_t_pru[3] = __disp_t_pru[2] + __extent_t_pru;
MPI_Type_create_struct(4, __blocklengths_t_pru, __disp_t_pru, __old_types_t_pru, &t_pru_type_MPI);
MPI_Type_commit(&t_pru_type_MPI);

}
