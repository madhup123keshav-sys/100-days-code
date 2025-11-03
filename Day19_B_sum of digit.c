#include <stdio.h>

//Write a program to find the sum of digits of a number.

int main() {
    int num, temp, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    if (temp < 0) temp = -temp;

  
    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
