#include <stdio.h>

int main(int argc, char *argv[]) {
    char c;
    
    printf("\n ------ Check alphabet, digit or special character ------\n");
    printf(" Character: "); scanf("%c", &c);
    
    printf("\n The '%c' is %s.\n\n", c, 
        (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? "an alphabet" : 
        c >= '0' && c <= '9' ? "a digit" : "a special character");
    
    return 0;
}