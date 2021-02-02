#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float length = 0, breadth = 0;
 
    printf("\n------ Area & Perimeter of Rectangle ------\n");
    printf(" Length  (in cm): "); scanf("%f", &length);
    printf(" Breadth (in cm): "); scanf("%f", &breadth);
    printf("\n\tRectangle\n Perimeter: %g cm\n Area: %g cm^2\n\n", 
        (2 * (length + breadth)), (length * breadth));
 
    return 0;
}