#include <stdio.h>

//Search for an element in an array using linear search.

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE]; 
    int n;             
    int sum = 0;       
    int maxElement;    
    int minElement;    
    
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    
    int searchElement;
    int foundIndex = -1; 
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
        
        if (i == 0) {
            maxElement = arr[i];
            minElement = arr[i];
        } else {
            
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
            
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
        }
        
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    
    printf("\nThe elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    
    printf("\nEnter the element to search for: ");
    if (scanf("%d", &searchElement) != 1) {
        printf("Invalid input for search element.\n");
        return 1; 
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            foundIndex = i; 
            break;         
        }
    }
    
    if (foundIndex != -1) {

        printf("\nElement %d found at position %d.\n", searchElement, foundIndex + 1);
    } else {
        printf("\nElement %d not found in the array.\n", searchElement);
    }
    
    printf("\nThe sum of all elements is: %d\n", sum);
    
    
    printf("The maximum element is: %d\n", maxElement);
    printf("The minimum element is: %d\n", minElement);
    
    printf("\nNumber of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);
    
    return 0; 
}

