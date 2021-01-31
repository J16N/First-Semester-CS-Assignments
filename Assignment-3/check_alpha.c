#include <stdio.h>
    
int main(int argc, char *argv[]) {
    char c;
    
    printf("\n ------ Check whether a character is alphabet or not ------\n");
    printf(" Character: "); scanf("%c", &c);
    
    printf("\n The '%c' is%san alphabet.\n\n", c, 
        (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 
        " " : " not ");
    
    return 0;
}