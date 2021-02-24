#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int n) {
    return n > 1 ? n * factorial(n - 1) : 1;
}

bool is_strong_num(int n) {
    int sum = 0, temp = n;

    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    return sum == n ? true : false;
}

int main(int argc, char *argv[]) {
    int n = 0;

    printf("\n------ CHECK IF A NUMBER IS A STRONG NUMBER ------\n\n");
    printf("\n Enter a number: "); scanf("%d", &n);

    printf("\n The number %d is%sa strong number.\n\n", n, 
        is_strong_num(n) ? " " : " not ");

    return EXIT_SUCCESS;
}