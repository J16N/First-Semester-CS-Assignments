#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num = 0, sum = 0;
    
    printf("\n----- SUM OF DIGITS -----\n");
    printf(" Enter a number: "); scanf("%d", &num);
    
    num = fabs(num);
    while (num) {
        sum += num % 10; 
        num /= 10;
    }
    
    printf("\n Sum of the digits: %d\n\n", sum);
    
    return EXIT_SUCCESS;
}