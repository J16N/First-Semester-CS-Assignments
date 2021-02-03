#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum_of_gp(float a, float r, int n) {
    return a * (pow(r, n) - 1) / (r - 1);
}

int main(int argc, char *argv[]) {
    float a = 0, r = 0; int n = 0;

    printf("\n------ Geometric Progression ------\n");
    printf(" First Term (a): "); scanf("%f", &a);
    printf(" Common ratio (r): "); scanf("%f", &r);
    printf(" Number of terms (n): "); scanf("%d", &n);

    printf("\n N-th value of the series is %g.", a * pow(r, n - 1));
    printf("\n The sum of G.P. is %g.\n\n", sum_of_gp(a, r, n));

    return EXIT_SUCCESS;
}