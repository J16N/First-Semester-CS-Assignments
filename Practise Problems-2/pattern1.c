#include <stdio.h>

int main() {
    int rows = 0;
    char pattern = 'A';

    printf("\n------ PATTERN - 1 ------\n\n");
    printf(" Rows: "); scanf("%d", &rows);
    printf("\n");
    
    for (size_t i = 0; i < rows; ++i, ++pattern) {
        for (size_t j = 0; j < i + 1; ++j)
            printf(" %c", pattern);
        printf("%s", i + 1 == rows ? "\n\n" : "\n");
    }

    return 0;
}