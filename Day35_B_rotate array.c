#include <stdio.h>

//Rotate an array to the right by k positions.

#define MAX_SIZE 100

void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
      
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[MAX_SIZE];
    int n, i, k;

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

    printf("Enter the number of positions to rotate right: ");
    if (scanf("%d", &k) != 1 || k < 0) {
        printf("Invalid rotation value. Must be non-negative.\n");
        return 1;
    }

    k = k % n;

    if (k > 0) {

        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);

        reverse(arr, k, n - 1);
    }

    printf("\n--- Array after rotating right by %d positions ---\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
