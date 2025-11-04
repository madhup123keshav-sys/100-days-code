#include <stdio.h>

//Find the sum of array elements.
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE]; 
    int n;             
    int sum = 0;       
    
    
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
        printf("Element %d: ", i + 1); 
        
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input during element entry.\n");
            return 1; 
        }
        
        sum += arr[i];
    }
    
    printf("\nThe elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    
    printf("\nThe sum of all elements is: %d\n", sum);
    
    return 0; 
}

