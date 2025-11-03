#include <stdio.h>

//Write a program to print the product of even numbers from 1 to n.


int main() {
    int n, i;
    long long product = 1;  

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 2; i <= n; i += 2) { 
            product *= i;
        }
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}
