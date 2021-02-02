#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float len = 0;
 
    printf("\n------ Length Conversion ------\n");
    printf(" Length (in cm): "); scanf("%f", &len);
    printf("\n Length (in m): %g\n Length (in km): %g\n\n", 
        (len * 1e-2), (len * 1e-5));
 
    return 0;
}