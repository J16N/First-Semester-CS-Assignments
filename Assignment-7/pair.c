#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    unsigned int size = 0, pairs = 0;

    printf("\n------ PAIR OF NUMBERS ------\n");
    printf(" Total Numbers: "); scanf("%u", &size);
    
    int nums[size];
    for (size_t i = 0; i < size; ++i) {
        printf(" Number-%ld: ", i + 1);
        scanf("%d", &nums[i]);

        if (i > 0 && fabs(nums[i] - nums[i - 1]) == 1)
            ++pairs;
    }

    if (pairs) {
        printf("\n The pair numbers are as follows:\n");
        for (size_t i = 0; i < size; ++i) {
            if (i > 0 && fabs(nums[i] - nums[i - 1]) == 1)
                printf(" %d, %d\n", nums[i - 1], nums[i]);
        }
        printf("\n");

    } else printf("\n There are no pair numbers.\n\n");

    return EXIT_SUCCESS;
}