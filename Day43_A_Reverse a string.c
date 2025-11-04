#include <stdio.h>
#include <stddef.h>
 
//Reverse a string.

void reverseString(char *str) {
    if (str == NULL) return;
    
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    if (length <= 1) return;

    size_t start = 0;
    size_t end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    
    char str1[] = "Hello";
    
    char str2[] = "C Program";
    
    char str3[] = "";

    printf("Original:  \"%s\"\n", str1);
    reverseString(str1);
    printf("Reversed:  \"%s\"\n\n", str1);

    printf("Original:  \"%s\"\n", str2);
    reverseString(str2);
    printf("Reversed:  \"%s\"\n\n", str2);
    
    printf("Original:  \"%s\"\n", str3);
    reverseString(str3);
    printf("Reversed:  \"%s\"\n\n", str3);

    return 0;
}