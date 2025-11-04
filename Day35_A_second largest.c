#include <stdio.h>
#include <limits.h> 

//Find the second largest element in an array.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int largest, secondLargest;

    printf("Enter the number of elements (at least 2): ");
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX_SIZE) {
        printf("Invalid size. Must be between 2 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN) {
        printf("\nThere is no second largest element (all elements are equal).\n");
    } else {
        printf("\nThe second largest element is: %d\n", secondLargest);
    }

    return 0; 
}
