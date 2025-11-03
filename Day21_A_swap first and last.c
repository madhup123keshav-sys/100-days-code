#include <stdio.h>

//Write a program to swap the first and last digit of a number.
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    if (temp < 0) temp = -temp; 

    lastDigit = temp % 10;

   
    digits = (int)log10(temp) + 1;

    firstDigit = temp / pow(10, digits - 1);

    if (digits == 1) {
        swappedNum = temp; 
    } else {
        
        int middle = temp % (int)pow(10, digits - 1); 
        middle /= 10;

        swappedNum = lastDigit * pow(10, digits - 1) + middle * 10 + firstDigit;
    }

    if (num < 0) swappedNum = -swappedNum;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
