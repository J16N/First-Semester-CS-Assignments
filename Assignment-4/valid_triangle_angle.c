#include <stdio.h>
	 
int main(int argc, char *argv[]) {
    double a = 0, b = 0, c = 0;
    
    printf("\n ------ Check validity of triangle with given angles ------\n\n");
    printf(" Angle-1 (in degrees): "); scanf("%lf", &a);
    printf(" Angle-2 (in degrees): "); scanf("%lf", &b);
    printf(" Angle-3 (in degrees): "); scanf("%lf", &c);
    
    printf("\n The sum of the angle is %g.\n", a + b + c);
    printf(" So the triangle %s be formed.\n\n", 
        a + b + c == 180 ? "can" : "cannot");
    
    return 0;
}