#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float temp = 0;
 
    printf("\n------ Temperature Converter (from °C to °F) ------\n");
    printf(" Temperature (in °C): "); scanf("%f", &temp);
    printf("\n Temperature (in °F): %g\n\n", 
        32 + (temp * (9 / 5)));
 
    return 0;
}