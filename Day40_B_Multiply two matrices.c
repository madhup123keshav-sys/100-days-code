#include <stdio.h>
#include <stdbool.h>

//Multiply two matrices.

bool multiplyMatrices(int r1, int c1, int A[r1][c1], 
                      int r2, int c2, int B[r2][c2], 
                      int C[r1][c2]) 
{
    if (c1 != r2) {
        printf("Error: Matrix A columns (%d) != Matrix B rows (%d).\n", c1, r2);
        return false;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return true;
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf("  [");
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]); 
            if (j < cols - 1) printf(", ");
        }
        printf(" ]\n");
    }
}

int main() {
    
    #define A_ROWS 3
    #define A_COLS 2
    int matrixA[A_ROWS][A_COLS] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    #define B_ROWS 2
    #define B_COLS 3
    int matrixB[B_ROWS][B_COLS] = {
        { 7,  8,  9},
        {10, 11, 12}
    };

    int matrixC[A_ROWS][B_COLS];

    printf("Matrix A (%dx%d):\n", A_ROWS, A_COLS);
    printMatrix(A_ROWS, A_COLS, matrixA);

    printf("\nMatrix B (%dx%d):\n", B_ROWS, B_COLS);
    printMatrix(B_ROWS, B_COLS, matrixB);

    if (multiplyMatrices(A_ROWS, A_COLS, matrixA, 
                         B_ROWS, B_COLS, matrixB, 
                         matrixC)) 
    {
        printf("\nResult: Matrix C = A * B (%dx%d):\n", A_ROWS, B_COLS);
        printMatrix(A_ROWS, B_COLS, matrixC);
    }

    return 0;
}