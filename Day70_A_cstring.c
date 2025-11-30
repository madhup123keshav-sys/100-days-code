//Q120 (Logic Enhancers) Write a program to take a string input. Change it to sentence case.
// Q120 (Logic Enhancers)
// Convert a string to sentence case

#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Convert first alphabetic character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}