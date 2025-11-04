#include <stdio.h>
#include <ctype.h> 

//Count spaces, digits, and special characters in a string.

void countChars(const char *str, int *spaceCount, int *digitCount, int *specialCount) {
    *spaceCount = 0;
    *digitCount = 0;
    *specialCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        
        if (c == ' ') {
            (*spaceCount)++;
        }
        else if (isdigit(c)) {
            (*digitCount)++;
        }
        else if (isalpha(c)) {
            
        }
        else {
            (*specialCount)++;
        }
    }
}

int main() {
    
    char myString[] = "Hello World! This is test #123. ($?*)";

    int spaces = 0;
    int digits = 0;
    int special = 0;

    countChars(myString, &spaces, &digits, &special);
    
    printf("String: \"%s\"\n", myString);
    printf("----------------------------------------\n");
    printf("Spaces:           %d\n", spaces);
    printf("Digits:           %d\n", digits);
    printf("Special Chars:    %d\n", special);

    return 0;
}