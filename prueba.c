#include <omp.h>
#include <stdio.h>

#pragma omp declare cluster
    typedef struct prueba {
        int campo1;
        char campo2;
    } t_pru;
#pragma omp end declare cluster

int main() {
    struct prueba x[10];
    
    x[0].campo1 = 1;
    x[0].campo2 = 'a';
    for (int i = 1; i < 10; i++) {
        x[i].campo1 = x[i - 1].campo1 + 1;
        x[i].campo2 = x[i - 1].campo2 + 1;
    }

    #pragma omp cluster broad(x)
    {
        for (int i = 0; i < 10; i++) {
            printf("x.campo1 = %d, x.campo2 = %c\n", x[i].campo1, x[i].campo2);
        }
    }

    return 0;
}
