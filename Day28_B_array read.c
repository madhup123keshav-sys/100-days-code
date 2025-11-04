#include <stdio.h>


//Read and print elements of a one-dimensional array.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE]; 
    int n;             
    
    
    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input for number of elements.\n");
        return 1; 
    }
    
    if (n <= 0 || n > MAX_SIZE) {
        printf("Error: Number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input during element entry.\n");
            return 1; 
        }
    }
    
    printf("\nThe elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0; 
}
