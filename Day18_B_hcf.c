#include <stdio.h>

//Write a program to find the HCF (GCD) of two numbers.

int main() {
    int num1, num2, a, b, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

   
    if (a < 0) a = -a;
    if (b < 0) b = -b;

   
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, a);

    return 0;
}

