#include <stdio.h>

//Toggle case of each character in a string.

void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            str[i] = c - 32;
        }
        else if (c >= 'A' && c <= 'Z') {
            str[i] = c + 32;
        }
        i++;
    }
}

int main() {
    
    char myString[] = "Hello World! This is Test 123.";

    printf("Original:  \"%s\"\n", myString);

    toggleCase(myString);
    
    printf("Toggled:   \"%s\"\n", myString);

    return 0;
}