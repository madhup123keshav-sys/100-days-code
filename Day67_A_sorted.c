//Q117 (Logic Enhancers)Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    
    printf("Enter size of first array: ");
    scanf("%d", &m);

    
    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    
    printf("Enter second sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    
    i = 0;
    j = 0;
    k = 0;

    
    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    
    while (i < m)
        merged[k++] = a[i++];

    
    while (j < n)
        merged[k++] = b[j++];

    
    printf("Merged sorted array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

