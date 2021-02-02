#include <stdio.h>
    
int main(int argc, char *argv[]) {
    float principle = 0, rate = 0, time = 0;
    printf("\n------ Simple Interest Calculator ------\n");
    printf(" Principle: ₹ "); scanf("%f", &principle);
    printf(" Rate (per annum): "); scanf("%f", &rate);
    printf(" Time (in years): "); scanf("%f", &time);
    
    printf("\n Interest (per annum): ₹ %g\n\n", principle * rate * time / 100);
    
    return 0;
}