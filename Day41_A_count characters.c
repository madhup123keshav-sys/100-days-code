#include <stdio.h>
#include <stddef.h> 

//Count characters in a string without using built-in length functions.

size_t customStringLength(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    
    char myString[] = "Hello World";
    
    
    char emptyString[] = "";
    
    char singleChar[] = "a";

    size_t len1 = customStringLength(myString);
    printf("String: \"%s\"\n", myString);
    printf("Length: %zu\n", len1); 

    printf("\n");

    size_t len2 = customStringLength(emptyString);
    printf("String: \"%s\"\n", emptyString);
    printf("Length: %zu\n", len2);
    
    printf("\n");

    size_t len3 = customStringLength(singleChar);
    printf("String: \"%s\"\n", singleChar);
    printf("Length: %zu\n", len3);

    return 0;
}