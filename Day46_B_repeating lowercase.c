#include <stdio.h>
#include <stdbool.h>

//Find the first repeating lowercase alphabet in a string.

char findFirstRepeatingLowercase(const char *str) {
    bool seen[26] = { false }; 
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (seen[index] == true) {
                return c;
            } else {
                seen[index] = true;
            }
        }
    }
    return '\0';
}

void testString(const char *str) {
    printf("String: \"%s\"\n", str);
    char repeat = findFirstRepeatingLowercase(str);
    
    if (repeat != '\0') {
        printf("Result: First repeating char is '%c'\n\n", repeat);
    } else {
        printf("Result: No repeating lowercase char found.\n\n");
    }
}

int main() {
    
    testString("hello world");    
    testString("This is a test"); 
    testString("a quick brown fox"); 
    testString("abacaba");     
    testString("AaBbCc");        
    testString("123_test_456");    

    return 0;
}