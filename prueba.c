int main() {
    int *valores;

    valores = (int *) malloc(sizeof(int) * 10);

    #pragma omp cluster alloc(valores[10])
    {
        #pragma omp distribute simd collapse(x) firstprivate(y)
        for (int i = 0; i < 10; i++) {
            valores[i] = i;
        }
    }
}