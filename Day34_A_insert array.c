#include <stdio.h>

//Insert an element in an array at a given position.
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, newValue, position;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE - 1);
    if (scanf("%d", &n) != 1 || n <= 0 || n >= MAX_SIZE) {
        printf("Invalid size. Must be less than %d to allow insertion.\n", MAX_SIZE);
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

    printf("\nEnter the new element to insert: ");
    if (scanf("%d", &newValue) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Enter the position (1 to %d) to insert at: ", n + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > n + 1) {
        printf("Invalid position. Must be between 1 and %d.\n", n + 1);
        return 1;
    }
    
    int insertIndex = position - 1;

    for (i = n - 1; i >= insertIndex; i--) {
        arr[i + 1] = arr[i];
    }

    arr[insertIndex] = newValue;

    n++; 

    printf("\n--- Array after insertion ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}
