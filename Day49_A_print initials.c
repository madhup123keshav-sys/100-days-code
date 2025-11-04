#include <stdio.h>
#include <ctype.h>   
#include <stdbool.h> 

//Print the initials of a name.

void printInitials(const char *name) {
    if (name == NULL || name[0] == '\0') {
        return;
    }

    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
}

int main() {
    
    char name1[] = "John Fitzgerald Kennedy";
    char name2[] = "Walter White";
    char name3[] = "ada lovelace"; 
    char name4[] = "J. R. R. Tolkien"; 
    char name5[] = "  Leading Spaces"; 

    printf("Name: %s\nInitials: ", name1);
    printInitials(name1);

    printf("\nName: %s\nInitials: ", name2);
    printInitials(name2);
    
    printf("\nName: %s\nInitials: ", name3);
    printInitials(name3);
    
    printf("\nName: %s\nInitials: ", name4);
    printInitials(name4);
    
    printf("\nName: %s\nInitials: ", name5);
    printInitials(name5);

    return 0;
}