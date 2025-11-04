#include <stdio.h>

//Replace spaces with hyphens in a string.

void replaceSpacesWithHyphens(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
}

int main() {
    
    char myString[] = "Hello World! This is a test.";

    printf("Original:  \"%s\"\n", myString);

    replaceSpacesWithHyphens(myString);
    
    printf("Modified:  \"%s\"\n", myString);

    return 0;
}