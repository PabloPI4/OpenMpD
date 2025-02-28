                   
#include <assert.h>
#include <mpi.h>
#include <omp.h>
#include <stdio.h>

void DeclareTypesMPI();

int __taskid = -1, __numprocs = -1;
    typedef struct prueba {
        int campo1;
        char campo2;
    } t_pru;
MPI_Datatype prueba_type_MPI;

int main() {
    struct prueba x[10];
    
	MPI_Init(NULL , NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);
	DeclareTypesMPI();
if (__taskid == 0) {
    x[0].campo1 = 1;
    x[0].campo2 = 'a';
    for (int i = 1; i < 10; i++) {
        x[i].campo1 = x[i - 1].campo1 + 1;
        x[i].campo2 = x[i - 1].campo2 + 1;
    }

}
MPI_Bcast(x, 10, prueba_type_MPI, 0, MPI_COMM_WORLD);

	        {
	        for (int i = 0; i < 10; i++) {
	            printf("x.campo1 = %d, x.campo2 = %c\n", x[i].campo1, x[i].campo2);
	        }
	    }
if (__taskid == 0) {

}
	MPI_Finalize();
    return 0;
}


void DeclareTypesMPI() {
int __blocklengths_prueba[2];
MPI_Datatype __old_types_prueba[2];
MPI_Aint __disp_prueba[2];
MPI_Aint __lb_prueba;
MPI_Aint __extent_prueba;
__blocklengths_prueba[0] = 1;
__old_types_prueba[0] = MPI_INT;
MPI_Type_get_extent(MPI_INT, &__lb_prueba, &__extent_prueba);
__disp_prueba[0] = __lb_prueba;
__blocklengths_prueba[1] = 1;
__old_types_prueba[1] = MPI_CHAR;
__disp_prueba[1] = __disp_prueba[0] + __extent_prueba;
MPI_Type_get_extent(MPI_CHAR, &__lb_prueba, &__extent_prueba);
MPI_Type_create_struct(2, __blocklengths_prueba, __disp_prueba, __old_types_prueba, &prueba_type_MPI);
MPI_Type_commit(&prueba_type_MPI);

}
