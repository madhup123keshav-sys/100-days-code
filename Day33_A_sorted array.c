#include <stdio.h>

//Search in a sorted array using binary search.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, key;
    int low, high, mid, foundIndex = -1;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid size.\n");
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

    printf("\nEnter the element to search for: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    low = 0;
    high = n - 1;

    while (low <= high) {
       
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            foundIndex = mid; 
            break;            
        } else if (arr[mid] < key) {
            
            low = mid + 1;
        } else {
           
            high = mid - 1;
        }
    }

    printf("\n--- Search Result ---\n");
    if (foundIndex != -1) {
       
        printf("Element %d found at position %d.\n", key, foundIndex + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0; 
}
