#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float num_1 = 0, num_2 = 0;
 
    printf("\n------ Addition Of Two Numbers ------\n");
    printf(" Number-1: "); scanf("%f", &num_1);
    printf(" Number-2: "); scanf("%f", &num_2);
    printf("\n Answer: %g\n\n", num_1 + num_2);
 
    return 0;
}