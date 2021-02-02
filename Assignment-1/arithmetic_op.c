#include <stdio.h>
 
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }
float my_pow(float a, float b) { return b > 1 ? a * my_pow(a, --b) : a; }
 
float (*func_ptr[5]) (float a, float b) = {
    [0] = add, [1] = sub, [2] = mul,
    [3] = div, [4] = my_pow,
};
 
int main(int argc, char *argv[])
{
    float num_1 = 0, num_2 = 0;
 
    printf("\n------ Arithmetic Operations on 2 numbers ------\n");
    printf(" Number-1: "); scanf("%f", &num_1);
    printf(" Number-2: "); scanf("%f", &num_2);
    
    char *operators[] = {
        [0] = "\n Addition       (%g + %g) = %g\n",
        [1] = " Subtraction    (%g - %g) = %g\n",
        [2] = " Multiplication (%g * %g) = %g\n",
        [3] = " Division       (%g / %g) = %g\n",
        [4] = " Exponentiation (%g ^ %g) = %g\n\n",
    };
 
    size_t length = sizeof(operators) / sizeof(operators[0]);
    for (size_t i = 0; i < length; ++i) {
        printf(operators[i],
            num_1, num_2, (*func_ptr[i])(num_1, num_2));
    }
 
    return 0;
}