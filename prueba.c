#include <omp.h>
#include <stdio.h>

int main() {
    int *x;

    x = (int *) malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        x[i] = i;
    }

    #pragma omp cluster alloc(x[10]) allgather(x[10]:chunk(1))
    {
        #pragma omp cluster teams distribute
        for (int i = 0; i < 10; i++) {
            fprintf(stderr, "x[%d] = %d\n", i, x[i]);
        }
    }

    return 0;
}
