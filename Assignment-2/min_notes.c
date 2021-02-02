#include <stdio.h>
    
int main(int argc, char *argv[]) {
    int notes[] = {
        [0] = 2000, [1] = 500, 
        [2] = 200, [3] = 100, 
        [4] = 50, [5] = 20, 
        [6] = 10, [7] = 5, 
        [8] = 2, [9] = 1,
    }, amount = 0, temp = 0;
    size_t length = sizeof(notes) / sizeof(int);
    
    printf("\n------ Minimum notes to make the amount ------\n");
    printf(" Enter amount: "); scanf("%d", &amount);
    
    for(size_t i = 0; i < length; ++i) {   
        int count = 0;
        
        do {    
            count = amount / notes[i];
            
            if (count > 0) {
                amount = amount % notes[i];
                temp += count;
            }
            
        } while (count > 0);
    
        if (temp) {
            printf(" Rs. %d: %d\n", notes[i], temp);
            temp = 0;
        }
    }
    
    return 0;
}