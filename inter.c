#include <stdio.h>
//write a program to calculate simple and compound interestfor given pricipal, rate, and , time.

#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;

    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}