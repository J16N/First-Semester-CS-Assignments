#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numbers[10] = { 0 }, sum = 0;

    printf("\n------ SUM OF TEN NUMBERS ------\n\n");
    for (size_t i = 0; i < 10; ++i) {
        printf(" Number-%ld: ", i + 1); 
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    printf("\n Sum of 10 numbers: %d\n\n", sum);

    return EXIT_SUCCESS;
}