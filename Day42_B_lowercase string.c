#include <stdio.h>

//Convert a lowercase string to uppercase without using built-in functions.

void stringToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    
    char myString[] = "Hello World! This is a test 123.";

    printf("Original:  \"%s\"\n", myString);

    stringToUpper(myString);
    
    printf("Uppercase: \"%s\"\n", myString);

    return 0;
}