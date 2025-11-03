#include <stdio.h>

//Write a program to find the roots of a quadratic equation and categorize them.

#include <math.h> 


int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;


    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    }
    else {
    
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
