#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned int size = 0, odd_c = 0, even_c = 0;
    int num = 0;

    printf("\n------ ODD EVEN ARRAY ------\n");
    printf(" Total Numbers: "); scanf("%d", &size);

    int odd[size], even[size];

    for (size_t i = 0; i < size; ++i) {
        printf(" Number-%ld: ", i + 1);
        scanf("%d", &num);

        if (num % 2) {
            odd[i] = num; 
            ++odd_c;
        } else {
            even[i] = num; 
            ++even_c;
        }
    }

    printf("\n Total odd numbers: %u\n Total even numbers: %u\n\n", 
        odd_c, even_c);

    return EXIT_SUCCESS;
}