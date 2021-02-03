#include <stdio.h>
#include <stdlib.h>

double sum_of_ap(float a, float d, int n) {
    return n * ((2 * a) + d * (n - 1)) / 2;
}

int main(int argc, char *argv[]) {
    float a = 0, d = 0; int n = 0;

    printf("\n------ Arithmetic Progression ------\n");
    printf(" First Term (a): "); scanf("%f", &a);
    printf(" Common Difference (d): "); scanf("%f", &d);
    printf(" Number of terms (n): "); scanf("%d", &n);

    printf("\n N-th value of the series is %g.", a + d * (n - 1));
    printf("\n The sum of A.P. is %g.\n\n", sum_of_ap(a, d, n));

    return EXIT_SUCCESS;
}