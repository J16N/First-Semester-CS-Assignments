#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    a = (int) fabs(a);
    b = (int) fabs(b);
    int divisor = a < b ? a : b;
    int rem = a > b ? a % b : b % a;
    int temp = rem;

    while (temp > 0) {
        rem = divisor % temp;
        divisor = temp;
        temp = rem;
    }

    return divisor;
}

int main(int argc, char *argv[]) {
    int a = 0, b = 0, hcf = 0;

    printf("\n------ GCD AND LCM OF TWO NUMBERS ------\n\n");
    printf(" Number-1: "); scanf("%d", &a);
    printf(" Number-2: "); scanf("%d", &b);

    hcf = gcd(a, b);
    
    printf("\n HCF of %d and %d: %d", a, b, hcf);
    printf("\n LCM of %d and %d: %g\n\n", a, b, fabs(a * b) / hcf);

    return EXIT_SUCCESS;
}