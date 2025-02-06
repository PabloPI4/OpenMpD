#include <omp.h>

int main() {
    int **a = (int **) malloc(10 *sizeof(int *));
    for (int i = 0; i < 10; i++) {
	a[i] = (int *) malloc(2 * sizeof(int));
    }

 int i = 0;

    #pragma omp cluster teams distribute
    for (; i < 10; i++) {
        a[i][0] = i;
        a[i][1] = i + 1;
    }

    printf("Valor de a[0] = %d\n", a[0]);

    #pragma omp cluster
        printf("Prueba de varias zonas de paralelizacion\n");
        printf("Final de la prueba\n");
    return 0;
}
