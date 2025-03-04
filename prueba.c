#include <omp.h>
#include <stdio.h>

int main() {
    int *x;

    x = (int *) malloc(sizeof(int) * 10);

    #pragma omp cluster alloc(x[10]) gather(x[10]:chunk(1))
    {
        #pragma omp cluster distribute dist_schedule(static, 1)
        for (int i = 0; i < 10; i++) {
            x[i] = i;
        }
    }

    for (int i = 0; i < 10; i++) {
        fprintf(stderr, "en 0, x[%d] = %d\n", i, x[i]);
    }
}