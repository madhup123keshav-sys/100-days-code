#include <stdio.h>
#include <ctype.h>   
#include <string.h>  
#include <stdbool.h> 

//Print initials of a name with the surname displayed in full.

void printInitialsWithSurname(const char *name) {
    size_t len = strlen(name);
    if (len == 0) return;

    int lastSpaceIndex = -1;
    int i;

    for (i = len - 1; i >= 0; i--) {
        if (isspace(name[i])) {
            lastSpaceIndex = i;
            break;
        }
    }

    if (lastSpaceIndex == -1) {
        printf("%s\n", name);
        return;
    }

    if (isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }
   
    for (i = 1; i < lastSpaceIndex; i++) {
        if (isspace(name[i - 1]) && isalpha(name[i])) {
            printf("%c. ", toupper(name[i]));
        }
    }

    printf("%s\n", &name[lastSpaceIndex + 1]);
}

int main() {
    
    printf("Name: John Fitzgerald Kennedy\nResult: ");
    printInitialsWithSurname("John Fitzgerald Kennedy");

    printf("\nName: Walter White\nResult: ");
    printInitialsWithSurname("Walter White");

    printf("\nName: ada lovelace\nResult: ");
    printInitialsWithSurname("ada lovelace");
    
    printf("\nName: J. R. R. Tolkien\nResult: ");
    printInitialsWithSurname("J. R. R. Tolkien");

    printf("\nName: Cher\nResult: ");
    printInitialsWithSurname("Cher");
    
    printf("\nName:   Leading Spaces Kennedy\nResult: ");
    printInitialsWithSurname("  Leading Spaces Kennedy");

    return 0;
}