#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    for (size_t i = 2; i <= sqrt(n); ++i) 
        if (!(n % i)) return false;
        
    return true;
}

void print_primes(int upper_l, int lower_l) {
    bool first_time = true;
    int temp = lower_l;

    while (++temp <= upper_l) {
        if (is_prime(temp)) {
            if (first_time) {
                printf("\n The prime numbers between %d and %d: \n ",
                    lower_l, upper_l);
            } 
            printf("%s%d", first_time ? " " : ", ", temp);
            first_time = false;
        }
    }

    if (first_time) 
        printf("\n There are no prime numbers between %d and %d.\n\n",
            lower_l, upper_l);
    else printf("\n\n");
}

int main(int argc, char *argv[]) {
    int upper_l = 0, lower_l = 0;
    
    printf("\n----- PRIME NUMBERS BETWEEN GIVEN RANGE -----\n");
    printf(" Lower Limit: "); scanf("%d", &lower_l);
    printf(" Upper Limit: "); scanf("%d", &upper_l);
    print_primes(upper_l, lower_l);
    
    return EXIT_SUCCESS;
}