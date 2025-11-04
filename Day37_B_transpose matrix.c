#include <stdio.h>

//Find the transpose of a matrix.

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int transpose[MAX_COLS][MAX_ROWS]; 
    int rows, cols, i, j;

    printf("Enter the number of rows (1 to %d): ", MAX_ROWS);
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > MAX_ROWS) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter the number of columns (1 to %d): ", MAX_COLS);
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid number of columns.\n");
        return 1;
    }

    printf("\nEnter %d integers to fill the matrix:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\a\n");
                return 1;
            }
        }
    }

    printf("\n--- The original matrix is: ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%-4d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\n--- The transpose matrix is: ---\n");
    for (i = 0; i < cols; i++) { 
        for (j = 0; j < rows; j++) { 
            printf("%-4d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
