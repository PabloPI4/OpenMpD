#include <omp.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int xx = 2;

    #pragma omp cluster broad(xx)

    fprintf(stderr, "valor xx = %d\n", xx);
}
