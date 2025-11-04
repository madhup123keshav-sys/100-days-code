#include <stdio.h>
#include <ctype.h> 

//Count vowels and consonants in a string.

void countVowelsAndConsonants(const char *str, int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char c = tolower(str[i]);
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    (*vowelCount)++;
                    break;
                default:
                    (*consonantCount)++;
                    break;
            }
        }
    }
}

int main() {
    
    char myString[] = "Hello World! This is a test string 123.";
    
    int vowels = 0;
    int consonants = 0;
   
    countVowelsAndConsonants(myString, &vowels, &consonants);
    
    printf("String: \"%s\"\n", myString);
    printf("----------------------------------------\n");
    printf("Total Vowels:     %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0