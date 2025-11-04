#include <stdio.h>

//Merge two arrays.

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE]; 
    int mergedArr[MAX_SIZE * 2];        
    
    int n1; 
    int n2; 
    int nMerged;
    
    printf("Enter the number of elements for the FIRST array (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n1) != 1 || n1 <= 0 || n1 > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }
    
    printf("Enter %d integers for the FIRST array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    
    printf("\nEnter the number of elements for the SECOND array (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n2) != 1 || n2 <= 0 || n2 > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }
    
    printf("Enter %d integers for the SECOND array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }
    nMerged = n1 + n2;
    
    
    printf("\n--- Merged Array ---\n");
    printf("The merged array elements are:\n");
    for (int i = 0; i < nMerged; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    
    return 0; 
}
