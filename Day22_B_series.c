#include <stdio.h>

//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

int main() {
    int n;
    double sum = 0.0;

   
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        
        numerator += 2;

    
        if (i == 1) {
            denominator = 4;  
        } else {
            denominator += 2;
        }
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}
