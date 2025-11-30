// Q127 Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;


    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(input);
        return 1;
    }


    while ((ch = fgetc(input)) != EOF) {
        ch = toupper(ch);      
        fputc(ch, output);     
    }

    
    fclose(input);
    fclose(output);

    printf("Conversion completed! Check output.txt\n");

    return 0;
}