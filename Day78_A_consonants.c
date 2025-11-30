//Q128 Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (isalpha(ch)) {   
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    
    fclose(fp);
    
    printf("\n--- File Analysis ---\n");
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}