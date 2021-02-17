#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size = 0, num = 0,
        odd_c = 0, even_c = 0;

    printf("\n------ ODD EVEN ARRAY ------\n");
    printf(" Total Numbers: "); scanf("%d", &size);

    int f_size = size % 2 ? (size + 1) / 2: size;
    int odd[f_size], even[f_size];

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

    printf("\n Total odd numbers: %d\n Total even numbers: %d\n\n", 
        odd_c, even_c);

    return EXIT_SUCCESS;
}