#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

//Check if one string is a rotation of another.

bool isRotation(const char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    if (len1 != len2) {
        return false;
    }
    if (len1 == 0) {
        return true;
    }

    char *temp = (char *)malloc(len1 * 2 + 1);
    if (temp == NULL) {
        printf("Error: Memory allocation failed.\n");
        return false;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    char *found = strstr(temp, str2);
    free(temp);
    
    return (found != NULL);
}

void testRotation(const char *s1, const char *s2) {
    printf("String 1: \"%s\"\n", s1);
    printf("String 2: \"%s\"\n", s2);
    
    if (isRotation(s1, s2)) {
        printf("Result:   They ARE rotations.\n\n");
    } else {
        printf("Result:   They are NOT rotations.\n\n");
    }
}

int main() {
    
    testRotation("waterbottle", "erbottlewat");
    testRotation("hello", "world");
    testRotation("abc", "bac");
    testRotation("rotation", "tationro");
    testRotation("abc", "abcd");
    testRotation("", "");

    return 0;
}
