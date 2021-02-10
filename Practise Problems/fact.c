#include <stdio.h>
#include <stdlib.h>

long long int fact(int n) {
    return n > 1 ? n * fact(n - 1) : 1;
}

int main(int argc, char *argv[]) {
    int n = 0;

    printf("\n------ FACTORIAL ------\n");
    printf(" Enter a number: "); scanf("%d", &n);

    printf("\n The factorial of %d is %lld.\n\n", 
        n, fact(n));

    return EXIT_SUCCESS;
}