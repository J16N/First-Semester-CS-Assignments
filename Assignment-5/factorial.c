/* Description
 * -----------
 * This program calculates the factorial 
 * of any given positive number.
 * Possible errors and exceptions are
 * handled.
 * 
 * Author
 * ------
 * Code contributed by J16N.
 * 
 * Additional Information
 * ----------------------
 * We were told to write the program
 * using loops so here we go.
 */ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = 0, temp = 0; 
    long factorial = 1;
    
    printf("Enter number (positive): ");
    scanf("%d", &num);
    
    if (num >= 0) {
        temp = num;
        
        while(temp > 1) factorial *= temp--;
        
        printf("Factorial of %d is %ld.", 
            num, factorial);
    
    } else 
        printf("Factorial of negetive numbers" 
            " are not possible.");

    return EXIT_SUCCESS;
}