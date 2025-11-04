#include <stdio.h>
#include <stdbool.h> 

//Check if a matrix is symmetric.

bool isSymmetric(int rows, int cols, int matrix[rows][cols]) {
    if (rows != cols) {
        printf("  Note: Matrix is not square.\n");
        return false;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("  Note: Mismatch at [%d][%d] (%d) vs [%d][%d] (%d)\n",
                       i, j, matrix[i][j], j, i, matrix[j][i]);
                return false;
            }
        }
    }
    return true;
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf("  [");
        for (int j = 0; j < cols; j++) {
            printf("%3d", matrix[i][j]);
            if (j < cols - 1) printf(", ");
        }
        printf(" ]\n");
    }
}

int main() {
    
    int matrixA[3][3] = {
        {1, 7, 3},
        {7, 4, -5},
        {3, -5, 6}
    };

    printf("Matrix A:\n");
    printMatrix(3, 3, matrixA);
    if (isSymmetric(3, 3, matrixA)) {
        printf("Result: Matrix A is symmetric.\n");
    } else {
        printf("Result: Matrix A is NOT symmetric.\n");
    }

    printf("\n---\n\n");

    int matrixB[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    printf("Matrix B:\n");
    printMatrix(3, 3, matrixB);
    if (isSymmetric(3, 3, matrixB)) {
        printf("Result: Matrix B is symmetric.\n");
    } else {
        printf("Result: Matrix B is NOT symmetric.\n");
    }

    printf("\n---\n\n");

    int matrixC[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matrix C:\n");
    printMatrix(2, 3, matrixC);
    if (isSymmetric(2, 3, matrixC)) {
        printf("Result: Matrix C is symmetric.\n");
    } else {
        printf("Result: Matrix C is NOT symmetric.\n");
    }

    return 0;
}