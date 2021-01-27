#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long long int n) {
    for (size_t i = 2; i <= sqrt(n); ++i) 
        if (!(n % i)) return false;
        
    return true;
}

void prime_factor(long long int n) {
    long long int temp = n;
    
    while(temp-- > 2) {
        if (is_prime(temp) && !(n % temp)) 
            printf("%lld ", temp);
    }
    printf("\n\n");
}

int main(int argc, char *argv[]) {
    long long int num = 0;
    
    printf("\n----- FIND PRIME FACTORS OF A GIVEN NUMBER -----\n");
    printf(" Enter a number: "); scanf("%lld", &num);
    
    if (is_prime(num))
        printf("\n %lld is already a prime number.\n\n", num);
        
    else {
        printf("\n Prime Factors: \n "); 
        prime_factor(num);
    }
    
    return EXIT_SUCCESS;
}
