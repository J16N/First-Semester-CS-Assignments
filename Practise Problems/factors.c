#include <stdio.h>
#include <stdlib.h>

void factors(int num) {
    int temp = num;

    while (temp-- > 0) {
        if (!(num % temp)) 
            printf(" %d%s", temp, temp - 1 > 0 ? "," : "\n\n");
    }
}

int main(int argc, char *argv[]) {
    int num = 0;

    printf("\n ------ FACTORS OF A NUMBER ------\n\n");
    printf(" Enter a number: "); scanf("%d", &num);

    printf("\n Factors of the number %d: \n", num);
    factors(num);

    return EXIT_SUCCESS;
}