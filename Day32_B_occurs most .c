#include <stdio.h>

//Find the digit that occurs the most times in an integer number.

int main() {
    long long num; 
    int frequency[10] = {0}; 
    int digit;
    
  
    printf("Enter an integer number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (num < 0) {
        num = -num;
    }
    
    do {
        digit = num % 10; 
        frequency[digit]++; 
        num = num / 10;  
    } while (num > 0);
    
    int mostFrequentDigit = 0;
    int maxCount = 0;
    
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            mostFrequentDigit = i;
        }
    }
 
    printf("\n--- Results ---\n");
    printf("The most frequent digit is: %d\n", mostFrequentDigit);
    printf("It appeared %d time(s).\n", maxCount);
    
    printf("\nFull digit frequency:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d time(s)\n", i, frequency[i]);
    }
    
    return 0; // Indicate successful execution
}
