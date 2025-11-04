#include <stdio.h>
#include <stdbool.h> 
#include <string.h>  

//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

bool convertDateFormat(const char *inputStr, char *outputStr, size_t outputSize) {
    
    const char *months[13] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int day, month, year;

    if (sscanf(inputStr, "%d/%d/%d", &day, &month, &year) != 3) {
        // Failed to parse. Invalid format.
        snprintf(outputStr, outputSize, "Invalid Input");
        return false;
    }

    if (month < 1 || month > 12) {
        
        snprintf(outputStr, outputSize, "Invalid Month");
        return false;
    }

    snprintf(outputStr, outputSize, "%02d-%s-%04d", day, months[month], year);
    
    return true;
}

int main() {
    
    char input1[] = "25/04/2024";
    char input2[] = "01/12/2025";
    char input3[] = "invalid_date";
    char input4[] = "15/13/2024"; 

    char output[20]; 

    if (convertDateFormat(input1, output, sizeof(output))) {
        printf("Original:  \"%s\"\n", input1);
        printf("Converted: \"%s\"\n\n", output);
    }

    if (convertDateFormat(input2, output, sizeof(output))) {
        printf("Original:  \"%s\"\n", input2);
        printf("Converted: \"%s\"\n\n", output);
    }
    
    printf("Original:  \"%s\"\n", input3);
    convertDateFormat(input3, output, sizeof(output));
    printf("Converted: \"%s\"\n\n", output);

    printf("Original:  \"%s\"\n", input4);
    convertDateFormat(input4, output, sizeof(output));
    printf("Converted: \"%s\"\n\n", output);

    return 0;
}