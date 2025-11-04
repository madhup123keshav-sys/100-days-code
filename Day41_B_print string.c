#include <stdio.h> 

//Print each character of a string on a new line.

void printCharsNewLine(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    
    char myString[] = "Hello";

    printf("Printing string \"%s\":\n", myString);
    printf("----------\n");
    
    printCharsNewLine(myString);
    
    printf("----------\n");

    return 0;
}