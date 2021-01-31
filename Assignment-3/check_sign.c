#include <stdio.h>
    
int main(int argc, char *argv[]) {
    int num = 0;
    
    printf("\n ------ Check if the number is +ve, -ve or zero ------\n");
    printf(" Number: "); scanf("%d", &num);
    
    printf("\n The number %d is %s.\n\n", num, 
        num > 0 ? "positive" : 
        num < 0 ? "negetive" : "equal to zero");
    
    return 0;
}