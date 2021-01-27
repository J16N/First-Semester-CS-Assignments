#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = 0, temp = 0; 
    long long int factorial = 1;
    
    printf("\n-------- FACTORIAL --------\n");
    printf(" Enter number (positive): ");
    scanf("%d", &num);
    
    if (num >= 0) {
        temp = num;
        
        while(temp > 1) factorial *= temp--;
        
        printf("\n Factorial of %d is %lld.\n\n", 
            num, factorial);
    
    } else 
        printf("\n Factorial of negetive numbers" 
            " are not possible.\n\n");

    return EXIT_SUCCESS;
}