#include <stdio.h>

//Write a program to print numbers from 1 to n.

int main() {
    int n, i = 1;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Numbers from 1 to %d are:\n", n);
        while (i <= n) {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }

    return 0;
}
