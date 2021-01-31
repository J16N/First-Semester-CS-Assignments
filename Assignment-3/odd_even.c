#include <stdio.h>

int main(int argc, char *argv[]) {
    int num = 0;
    
    printf("\n ------ Check if the number is odd or even ------\n");
    printf(" Number: "); scanf("%d", &num);
    
    printf("\n The number %d is %s.\n\n", num, 
        num % 2 ? "odd" : "even");
    
    return 0;
}