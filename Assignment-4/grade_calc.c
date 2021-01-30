#include <stdio.h>
#include <stdlib.h>
    
int main(int argc, char *argv[]) {
    char mark[3];
    char *subs[] = {
        [0] = "Physics", [1] = "Chemistry",
        [2] = "Biology", [3] = "Mathematics",
        [4] = "Computer Science"
    };
    size_t len = sizeof(subs) / sizeof(subs[1]);
    char grade[len + 1];
    
    printf("\n ------ Grade Calculator ------\n\n");
    for (size_t i = 0; i < len; i++) {
        printf(" %s Marks: ", subs[i]);
        scanf("%s", mark);
    
        switch(atoi(mark) / 10) {
            case 10: case 9:
                grade[i] = 'A';
                break;
            
            case 8:
                grade[i] = 'B';
                break;
    
            case 7:
                grade[i] = 'C';
                break;
    
            case 6:
                grade[i] = 'D';
                break;
    
            case 5: case 4:
                grade[i] = 'E';
                break;
    
            default:
                grade[i] = 'F';
                break;
        }
    }
    
    for (size_t i = 0; i < len; i++) {
        printf("%s %s: %c\n%s", i == 0 ? "\n" : "", 
            subs[i], grade[i], i == len - 1 ? "\n" : "");
    }
    
    return 0;
}