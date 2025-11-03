#include <stdio.h>

//Write a program to take a number as input and print its equivalent binary representation.

int main() {
    int num, i;
)
    int index = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
    } else {
        int temp = num;
        while (temp > 0) {
            binary[index] = temp % 2; 
            temp = temp / 2;
            index++;
        }

        printf("Binary representation of %d: ", num);
        for (i = index - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf("\n");
    }

    return 0;
}
