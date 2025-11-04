#include <stdio.h>

//Delete an element from an array.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, position;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid size.\n");
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

    printf("\nEnter the position (1 to %d) to delete: ", n);
    if (scanf("%d", &position) != 1 || position < 1 || position > n) {
        printf("Invalid position. Must be between 1 and %d.\n", n);
        return 1;
    }
    
    int deleteIndex = position - 1;

    for (i = deleteIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--; 

    printf("\n--- Array after deletion ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}
