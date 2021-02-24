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
    long long int num = 0;
    
    printf("\n----- CHECK IF A NUMBER IS PRIME -----\n");
    printf(" Enter a number: "); scanf("%lld", &num);
    printf("\n The number %lld is%sprime.\n\n", num, 
        is_prime(num) ? " " : " not ");
    
    return EXIT_SUCCESS;
}