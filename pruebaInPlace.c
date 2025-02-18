#include <stdio.h>

int main() {
    int *valores;

    fprintf(stderr, "prueba\n");

    #pragma omp cluster gather(valores[8])
    {
        if ((valores = (int *) malloc(sizeof(int) * 8)) == NULL) {
            fprintf(stderr, "error de asignacion de memoria dinamica\n");
            exit(2);
        }

        #pragma omp cluster teams distribute
        for (int i = 0; i < 8; i++) {
            valores[i] = valores[i]  + i;
        }
    }

    for (int i = 0; i < 8; i++) {
        fprintf(stderr, "valores[%d] = %d\n", i, valores[i]);
    }

    return 0;
}
