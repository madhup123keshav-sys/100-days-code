#include <stdio.h>

//Count frequency of a given character in a string.

int countCharacter(const char *str, char target) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    
    char myString[] = "Hello World! This is a test string.";
    
    char charToFind1 = 'l';
    int count1 = countCharacter(myString, charToFind1);
    printf("String: \"%s\"\n", myString);
    printf("Character: '%c'\n", charToFind1);
    printf("Frequency: %d\n", count1);
    
    printf("\n");

    char charToFind2 = 's';
    int count2 = countCharacter(myString, charToFind2);
    printf("String: \"%s\"\n", myString);
    printf("Character: '%c'\n", charToFind2);
    printf("Frequency: %d\n", count2);
    
    printf("\n");
    
    char charToFind3 = 'z';
    int count3 = countCharacter(myString, charToFind3);
    printf("String: \"%s\"\n", myString);
    printf("Character: '%c'\n", charToFind3);
    printf("Frequency: %d\n", count3);

    return 0;
}