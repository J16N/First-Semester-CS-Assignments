#include <stdio.h>
    
int main(int argc, char *argv[]) {
    double num_1 = 0, num_2 = 0, num_3 = 0;
    
    printf("\n ------ Find maximum number between three numbers ------\n");
    printf(" Number-1: "); scanf("%lf", &num_1);
    printf(" Number-2: "); scanf("%lf", &num_2);
    printf(" Number-3: "); scanf("%lf", &num_3);
    
    printf("\n Maximum Number: %g\n\n", 
        num_1 > num_2 && num_1 > num_3 ? num_1 :
        num_2 > num_1 && num_2 > num_3 ? num_2 : num_3);
    
    return 0;
}