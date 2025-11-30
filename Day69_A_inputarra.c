//Q119 (Logic Enhancers)Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main() {
    int n, i, xor_all = 0, xor_array = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (with one element repeated): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_array ^= arr[i];   // XOR of all array elements
    }

    // XOR of numbers from 1 to n-1 (since one number repeats)
    for (i = 1; i < n; i++) {
        xor_all ^= i;
    }

    // XOR of both gives the repeated number
    int repeated = xor_all ^ xor_array;

    printf("Repeated element: %d\n", repeated);

    return 0;
}