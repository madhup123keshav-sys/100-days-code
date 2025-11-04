#include <stdio.h>

//Add two matrices.

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int resultMatrix[MAX_ROWS][MAX_COLS];
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

    printf("\n--- Enter elements for Matrix A ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            if (scanf("%d", &matrixA[i][j]) != 1) {
                printf("Invalid input.\a\n");
                return 1;
            }
        }
    }

    printf("\n--- Enter elements for Matrix B ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            if (scanf("%d", &matrixB[i][j]) != 1) {
                printf("Invalid input.\a\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\n--- Result of Matrix A + Matrix B: ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%-4d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
