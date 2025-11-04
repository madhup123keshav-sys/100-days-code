#include <stdio.h>
#include <string.h> 
#include <stddef.h> 

//Print all sub-strings of a string.

void printSubstrings(const char *str) {
    size_t len = strlen(str);

    for (int i = 0; i < len; i++) {
        
        for (int j = i; j < len; j++) {
            
            // Loop 3: Print from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    
    char str1[] = "abc";
    printf("--- Substrings for \"%s\" --- \n", str1);
    printSubstrings(str1);
    
    printf("\n");

    char str2[] = "test";
    printf("--- Substrings for \"%s\" --- \n", str2);
    printSubstrings(str2);

    return 0;
}