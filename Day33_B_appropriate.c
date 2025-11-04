#include <stdio.h>

//Insert an element in a sorted array at the appropriate position.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, newValue;
    int insertPos = 0;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE - 1);
    if (scanf("%d", &n) != 1 || n <= 0 || n >= MAX_SIZE) {
        printf("Invalid size. Must be less than %d to allow insertion.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integers IN ASCENDING SORTED ORDER:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (i > 0 && arr[i] < arr[i - 1]) {
            printf("Error: Array is not in sorted order.\n");
            return 1;
        }
    }

    printf("\nEnter the new element to insert: ");
    if (scanf("%d", &newValue) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (insertPos < n && arr[insertPos] < newValue) {
        insertPos++;
    }
   
    for (i = n - 1; i >= insertPos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[insertPos] = newValue;

    n++; 

    printf("\n--- Array after insertion ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}
