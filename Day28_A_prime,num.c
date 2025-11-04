#include <stdio.h>
#include <stdbool.h> 
#include <math.h>    

//Write a program to print all the prime numbers from 1 to n.


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    if (num == 2) {
        return true;
    }
    
    if (num % 2 == 0) {
        return false;
    }
    
    int limit = (int)sqrt(num);
    
    for (int i = 3; i <= limit; i += 2) {
        
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    
    printf("Enter the value of n (a positive integer): ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1; 
    }
    
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }
    
    printf("Prime numbers from 1 to %d are:\n", n);
    
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
