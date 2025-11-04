#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//Check if two strings are anagrams of each other.

bool areAnagrams(const char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    if (len1 != len2) {
        return false;
    }
    
    int charCount[256] = {0};

    for (size_t i = 0; i < len1; i++) {
        charCount[(unsigned char)str1[i]]++;
    }

    for (size_t i = 0; i < len2; i++) {
        charCount[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (charCount[i] != 0) {
            return false;
        }
    }
    return true;
}

void testAnagram(const char *s1, const char *s2) {
    printf("String 1: \"%s\"\n", s1);
    printf("String 2: \"%s\"\n", s2);
    
    if (areAnagrams(s1, s2)) {
        printf("Result:   They ARE anagrams.\n\n");
    } else {
        printf("Result:   They are NOT anagrams.\n\n");
    }
}

int main() {
    
    testAnagram("listen", "silent");
    testAnagram("Dormitory", "dirty room"); 
    testAnagram("hello", "world");
    testAnagram("Listen", "silent"); 
    testAnagram("abc", "bca");
    testAnagram("aaa", "aab");
    testAnagram("", ""); 

    return 0;
}