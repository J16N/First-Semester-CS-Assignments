#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = 0;

    printf("\n------ SUM OF FIRST N NUMBERS ------\n");
    printf(" N: "); scanf("%d", &n);

    printf("\n Sum of first %d natural numbers: %d\n\n", n,
        n * (n + 1) / 2);

    return EXIT_SUCCESS;
}