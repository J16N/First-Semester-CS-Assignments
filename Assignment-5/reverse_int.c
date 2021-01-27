#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num = 0, reversed_num = 0;
    
    printf("\n----- REVERSE A GIVEN NUMBER -----\n");
    printf(" Enter a number: "); scanf("%d", &num);
    
    int length = log10(fabs(num));
    
    while (length >= 0) {
        reversed_num += (num % 10) * pow(10, length);
        num /= 10; length--;
    }
    
    printf("\n Reversed Number: %d\n\n", reversed_num);
    
    return EXIT_SUCCESS;
}