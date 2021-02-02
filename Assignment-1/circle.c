#include <stdio.h>
#define PI 3.14
 
int main(int argc, char *argv[])
{
    float rad = 0;
 
    printf("\n------ Circle ------\n");
    printf(" Radius (in cm): "); scanf("%f", &rad);
    printf("\n Diameter: %g cm\n Perimeter: %g cm\n Area: %g cm^2\n\n", 
        (2 * rad), (2 * PI * rad), (PI * rad * rad));
 
    return 0;
}