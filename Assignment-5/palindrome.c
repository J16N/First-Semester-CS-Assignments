#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num = 0, reversed_num = 0;
    
    printf("\n----- CHECK IF A NUMBER IS A PALINDROME -----\n");
    printf(" Enter a number: "); scanf("%d", &num);
    
    int length = log10(fabs(num));
    int temp = num;
    
    while (length >= 0) {
        reversed_num += (temp % 10) * pow(10, length);
        temp /= 10; length--;
    }
    
    printf("\n The number %d is%sa palindrome.\n\n", num,
        num == reversed_num ? " " : " not ");
    
    return EXIT_SUCCESS;
}