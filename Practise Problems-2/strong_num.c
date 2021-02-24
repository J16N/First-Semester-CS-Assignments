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
    int lower = 0, upper = 0;

    printf("\n------ CHECK IF A NUMBER IS A STRONG NUMBER ------\n\n");
    printf("\n Lower Limit: "); scanf("%d", &lower);
    printf("\n Upper Limit: "); scanf("%d", &upper);

    printf("\n The strong numbers between %d and %d are:\n ", lower, upper);
    for (; lower <= upper; ++lower) {
        if (is_strong_num(lower)) 
            printf("%d ", lower);
    }
    printf("\n\n");

    return 0;
}