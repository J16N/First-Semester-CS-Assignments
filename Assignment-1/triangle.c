#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float ang_1 = 0, ang_2 = 0;
 
    printf("\n------ Finding the triangle's third angle ------\n");
    printf(" Angle-1 (in degrees): "); scanf("%f", &ang_1);
    printf(" Angle-2 (in degrees): "); scanf("%f", &ang_2);
    printf("\n Angle-3 (in degrees): %g\n\n", 180 - (ang_1 + ang_2));
 
    return 0;
}