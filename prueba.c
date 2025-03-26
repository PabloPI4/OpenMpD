#include <stdio.h>

int main() {
    int *valores;

    valores = (int *) malloc(sizeof(int) * 10);
    fprintf(stderr, "Empezando prueba\n");

    #pragma omp cluster update alloc(valores[10]) scatter(valores[10]:chunk(1))
    
    fprintf(stderr, "Prueba de cluster data\n");
}