#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_perfect_num(int n) {
    int sum = 0, temp = n;

    while (--temp > 0)
        if (!(n % temp)) sum += temp;

    return n == sum ? true : false;
}

int main(int argc, char *argv[]) {
    int n = 0;

    printf("\n------ CHECK IF A NUMBER IS A PERFECT NUMBER ------\n\n");
    printf(" Enter a number: "); scanf("%d", &n);

    printf("\n The number %d is%sa perfect number.\n\n", n, 
        is_perfect_num(n) ? " " : " not ");

    return EXIT_SUCCESS;
}