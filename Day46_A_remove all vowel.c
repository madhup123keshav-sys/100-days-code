#include <stdio.h>

//Remove all vowels from a string.

void removeVowels(char *str) {
    int i = 0; 
    int j = 0; 

    while (str[i] != '\0') {
        char c = str[i];
        
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                break; 
            default:
                
                str[j] = str[i];
                j++;
                break;
        }
        i++;
    }
    str[j] = '\0'; 
}

int main() {
    
    char myString[] = "Hello World! This is a test.";
    
    char allVowels[] = "AaEeIiOoUu";

    printf("Original:  \"%s\"\M", myString);
    removeVowels(myString);
    printf("Modified:  \"%s\"\M\n", myString);

    printf("Original:  \"%s\"\M", allVowels);
    removeVowels(allVowels);
    printf("Modified:  \"%s\"\M\n", allVowels);

    return 0;
}