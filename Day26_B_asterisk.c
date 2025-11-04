#include <stdio.h>

//Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*\n");
    }
}

int main() {
    printStars(1);
    
    printf("\n");

    printStars(3);
    
    printf("\n");
    
    printStars(5);
    
    printf("\n");
    
    printStars(3);
    
    printf("\n");
    
    printStars(1);
    
    return 0;
}
