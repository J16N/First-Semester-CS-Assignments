#include <stdio.h>
 
int main(int argc, char *argv[])
{
    float marks[5], total = 0;
    int subjs = sizeof(marks) / sizeof(float);
 
    printf("\n------ Result of Five subjects ------\n");
    for (size_t i = 0; i < subjs; ++i) {
        printf(" Marks obtained in sub-%zu: ", i + 1);
        scanf("%f", &marks[i]);
    }
 
    for (size_t i = 0; i < subjs; ++i) total += marks[i];
 
    printf("\n Total Marks: %g\n Average Marks: %g\n Percentage: %g%%\n\n", 
        total, (total / subjs), (total * 100  / (subjs * 100)));
 
    return 0;
}