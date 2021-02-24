#include <stdio.h>

int main() {
    int rows = 0;

    printf("\n------ PATTERN - 3 ------\n\n");
    printf(" Rows: "); scanf("%d", &rows);
    printf("\n");

    for (size_t i = rows; i > 0; --i) {
        for (size_t j = 0; j < i; ++j)
            printf(" *");
        printf("\n");
    }

    return 0;
}