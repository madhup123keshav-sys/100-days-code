#include <stdio.h>

//Write a program to find the LCM of two numbers.

int hcf(int a, int b) {
    int remainder;
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, lcmValue;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 || num2 == 0) {
        printf("LCM of 0 and any number is 0.\n");
    } else {
        lcmValue = (num1 * num2) / hcf(num1, num2);
        if (lcmValue < 0) lcmValue = -lcmValue;  // Ensure LCM is positive
        printf("LCM of %d and %d is: %d\n", num1, num2, lcmValue);
    }

    return 0;
}
