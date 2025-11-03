#include <stdio.h>

//Write a program to find the product of odd digits of a number

int main() {
    int num, temp, remainder;
    long long product = 1;
    int hasOdd = 0; 
 
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

   
    if (temp < 0) temp = -temp;

   
    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is: %lld\n", num, product);
    } else {
        printf("No odd digits in %d\n", num);
    }

    return 0;
}
