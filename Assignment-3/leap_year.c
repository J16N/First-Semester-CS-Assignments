#include <stdio.h>
    
int main(int argc, char *argv[]) {
    int year = 0;
    
    printf("\n ------ Check whether a year is a leap year ------\n");
    printf(" Year: "); scanf("%d", &year);

printf("\n %d is%sa leap year.\n\n", year,
        (!(year % 4) && (year % 100)) || !(year % 400) ? " " : " not ");
    
    return 0;
}