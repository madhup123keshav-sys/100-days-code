#include <stdio.h>

//Reverse each word in a sentence without changing the word order.
void reverseSubstring(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *wordStart = str;
    char *current = str;

    while (*current != '\0') {
        if (*current == ' ') {
            reverseSubstring(wordStart, current - 1);
            wordStart = current + 1;
        }
        current++;
    }
    
    reverseSubstring(wordStart, current - 1);
}

void test(char str[]) {
    printf("Original:  \"%s\"\n", str);
    reverseWords(str);
    printf("Reversed:  \"%s\"\n\n", str);
}

int main() {
    
    char str1[] = "Hello World";
    test(str1);

    char str2[] = "C is fun to learn";
    test(str2);

    char str3[] = "single"; 
    test(str3);
    
    char str4[] = "A B C"; 
    test(str4);
    
    char str5[] = ""; 
    test(str5);

    return 0;
}