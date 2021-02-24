#include <stdio.h>
#include <stdlib.h>

int sum_of_factors(int num) {
    int sum = 0, temp = num, count = 0;

    while (temp > 0) {
        if (!(num % temp)) {
            sum += temp;
            ++count;
        }
        temp--;
    }

    printf("\n Number of factors: %d", count);
    return sum;
}

int main(int argc, char *argv[]) {
    int num = 0, sum = 0;

    printf("\n ------ SUM OF FACTORS ------\n");
    printf(" Enter a number: "); scanf("%d", &num);

    sum = sum_of_factors(num);
    printf("\n Sum of all the factors: %d\n\n", sum);

    return EXIT_SUCCESS;
}