#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <mpi.h>

int main(int argc, char **argv){
	int i, N=10;
	int a[N], b[N], c[N], d[N], e[N];

	{
	if (__numprocs != 5) {
		printf("Error, num_teams debe ser 5\n");
		MPI_Finalize();
		exit(-1);
	}

	for (i=0; i<N; i++) {
		#pragma omp task_async depend(out:a[i:1])
		{
			a[i] = 13+ i;
		}
		#pragma omp task_async depend(in:a[i:1]) depend(out:b[i:1])  firstprivate(i)
		{
			b[i] = a[i] + 1;
		}
		#pragma omp task_async depend(in:b[i:1]) depend(out:c[i:1])  firstprivate(i)
		{
			c[i] = b[i] + 2;
		}
		#pragma omp task_async depend(in:c[i:1]) depend(out:d[i:1]) firstprivate(i)
		{
			d[i] = c[i] + 3;
		}
		#pragma omp task_async depend(in:d[i:1])
		{
			e[i] = d[i] + 4;
			printf("e[%d]: %d\n", i, e[i]);
		}
	}
	}

	return 0;
}