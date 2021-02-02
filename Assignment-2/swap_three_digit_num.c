#include <stdio.h>
#include <math.h>
    
int main(int argc, char *argv[]) {
    int num = 0, first_digit = 0, digits = 0, 
        last_digit = 0, swapped_num = 0;
    
    printf("\n------ Swap the last and first digit of a number ------\n");
    printf(" Number: "); scanf("%d", &num);
    
    last_digit = num % 10;
    digits = (int) log10(num);
    first_digit = num / pow(10, digits);
    
    swapped_num = last_digit;
    swapped_num *= pow(10, digits);
    swapped_num += num % ((int) pow(10, digits));
    swapped_num -= last_digit;
    swapped_num += first_digit;
    
    printf(" Swapped number: %d\n\n", swapped_num);
    
    return 0;
}