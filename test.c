#include <omp.h>

int main() {
	int x = 0;
	#pragma omp cluster teams distribute
	#pragma omp parallel for private(x) num_threads(5) reduce(SUM:x)
	for (int i = 0; i < 1000000; i++) {
		x++;
	}
}
