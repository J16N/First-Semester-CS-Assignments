#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float num[10] = { 0 }, min = INFINITY, max = -INFINITY;

    printf("\n------ MAXIMUM AND MINIMUM OF 10 NUMBERS ------\n");
    for (size_t i = 0; i < 10; ++i) {
        printf(" Number-%ld: ", i + 1);
        scanf("%g", &num[i]);

        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }

    printf("\n Maximum Number: %g\n Minimum Number: %g\n\n",
        max, min);

    return EXIT_SUCCESS;
}