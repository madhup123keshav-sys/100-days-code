#include <stdio.h>

//Write a program to print all factors of a given number.

int main() {
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Every integer is a factor of 0.\n");
    } else {
        printf("Factors of %d are: ", num);
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
