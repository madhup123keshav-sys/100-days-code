#include <stdio.h>

//Write a program to reverse a given number.

int main() {
    int num, originalNum, reversed = 0, remainder;

 
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number of %d is: %d\n", originalNum, reversed);

    return 0;
}
