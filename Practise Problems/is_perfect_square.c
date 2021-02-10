#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_perfect_square(int num) {
    double ans = sqrt(num);
    return ans == (int) ans ? true : false;
}

int main(int argc, char *argv[]) {
    int num = 0;

    printf("\n ------ CHECK IF A NUMBER IS A PERFECT SQUARE ------\n");
    printf(" Enter a number: "); scanf("%d", &num);

    printf("\n The number %d is%sa perfect square.\n\n", num, 
        is_perfect_square(num) ? " " : " not ");

    return EXIT_SUCCESS;
}