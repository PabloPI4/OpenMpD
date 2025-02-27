#include <omp.h>

#pragma omp declare cluster
    typedef struct {
        int campo1;
        char campo2, campo3;
        int campo4;
    } t_pru;
#pragma omp end declare cluster

int main() {
    int x = 0;

    x += 8;

    #pragma omp cluster
    {
    printf("x = %d\n", x);
    }

    return 0;
}
