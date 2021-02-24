#include <stdio.h>

int factorial(int n) {
    return n > 1 ? n * factorial(n - 1) : 1;
}

int is_strong_num(int n) {
    int sum = 0, temp = n;

    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    return sum == n ? 1 : 0;
}

int main() {
    int n = 0;

    printf("\n------ CHECK IF A NUMBER IS A STRONG NUMBER ------\n\n");
    printf("\n Enter a number: "); scanf("%d", &n);

    printf("\n The number %d is%sa strong number.\n\n", n, 
        is_strong_num(n) ? " " : " not ");

    return 0;
}