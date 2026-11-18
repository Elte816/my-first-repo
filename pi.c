#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    long long n = 10000000LL;
    long long inside = 0;

    srand((unsigned)time(NULL));

    for (long long i = 0; i < n; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1.0) {
            inside++;
        }
    }

    double pi = 4.0 * (double)inside / (double)n;
    printf("pi ≈ %.6f\n", pi);
    return 0;
}