#include <stdio.h>

int main() {
    int rows = 0;

    printf("\n------ PATTERN - 2 ------\n\n");
    printf(" Rows: "); scanf("%d", &rows);
    printf("\n");

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < i + 1; ++j)
            printf(" *");
        printf("\n");
    }

    return 0;
}