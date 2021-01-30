#include <stdio.h>
    
int valid_triangle(double a, double b, double c) {
    return (a + b <= c) || (b + c <= a) || (c + a <= b) ? 0 : 1;
}
    
int main(int argc, char *argv[]) {
    double a = 0, b = 0, c = 0;

    printf("\n ------ Check validity of triangle with given sides ------\n\n");
    printf(" Side-1: "); scanf("%lf", &a);
    printf(" Side-2: "); scanf("%lf", &b);
    printf(" Side-3: "); scanf("%lf", &c);
    
    printf("\n The triangle %s be formed with the given sides.\n\n",
        valid_triangle(a, b, c) ? "can" : "cannot");
    
    return 0;
}