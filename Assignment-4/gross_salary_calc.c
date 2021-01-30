#include <stdio.h>
    
int main(int argc, char *argv[]) {
    float salary = 0;
    
    printf("\n ------ Gross Salary Calculator ------\n\n");
    printf(" Basic Salary: ₹ "); scanf("%f", &salary);
    
    printf("\n Gross Salary: ₹ %g\n\n", 
        salary <= 10000 ? salary :
        salary >= 10001 && salary <= 20000 ? 1.15 * salary : 
        1.25 * salary);
    
    return 0;
}