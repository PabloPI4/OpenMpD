#include <omp.h>

int main() {
    int **a = (int **) malloc(10 *sizeof(int *));
    for (int i = 0; i < 10; i++) {
	a[i] = (int *) malloc(2 * sizeof(int));
    }

    #pragma omp cluster scatter(a[10][2]:chunk(2))
    return 0;
}
