#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int fact(int n) {
    return n > 1 ? n * fact(n - 1) : 1;
}

double cosine_series(float x, int n) {
    double result = 0;

    for (size_t i = 0, j = 0; i < n; i += 2, ++j)
        result += pow(-1, j) * pow(x, i) / fact(i);

    return result;
}

int main(int argc, char *argv[]) {
    double x = 0; int n = 0;

    printf("\n------ Cosine Function ------\n");
    printf(" Theta (x in degree): "); scanf("%lf", &x);
    printf(" N-th Term: "); scanf("%d", &n);

    x = x * PI / 180;
    printf("\n Actual value of cos(%g°): %g", 180 * x / PI, cos(x));
    printf("\n Series computed value of cos(%g°): %g\n\n", 
        180 * x / PI, cosine_series(x, n));

    return EXIT_SUCCESS;
}