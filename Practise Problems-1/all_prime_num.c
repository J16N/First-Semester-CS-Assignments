#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long long int n) {
    for (size_t i = 2; i <= sqrt(n); ++i) 
        if (!(n % i)) return false;
        
    return true;
}

int main(int argc, char *argv[]) {
    int n = 0;

    printf("\n------ PRINT ALL FIRST N PRIME NUMBERS ------\n");
    printf(" N: "); scanf("%d", &n);

    for (size_t i = 2, count = 0; count < n; ++i) {
        if (is_prime(i)) {
            printf("%s%ld%s", 
                i == 2 || !(count % 10) ? "\n " : " ", 
                i, count + 1 == n ? "\n\n" : ",");
            ++count;
        }
    }

    return EXIT_SUCCESS;
}