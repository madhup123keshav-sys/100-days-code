#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

//Check if a string is a palindrome.

size_t customStringLength(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool isPalindrome(const char *str) {
    size_t length = customStringLength(str);
    if (length <= 1) {
        return true;
    }
    size_t start = 0;
    size_t end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void testPalindrome(const char *str) {
    printf("String: \"%s\"\n", str);
    if (isPalindrome(str)) {
        printf("Result: IS a palindrome.\n\n");
    } else {
        printf("Result: is NOT a palindrome.\n\n");
    }
}

int main() {
    
    testPalindrome("racecar");
    testPalindrome("hello");
    testPalindrome("madam");
    testPalindrome("step on no pets"); 
    testPalindrome("A"); 
    testPalindrome("");

    return 0;
}