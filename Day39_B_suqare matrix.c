#include <stdio.h>

//Find the sum of main diagonal elements for a square matrix.

int sumMainDiagonal(int N, int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

void printMatrix(int N, int matrix[N][N]) {
    printf("Matrix (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        printf("  [");
        for (int j = 0; j < N; j++) {
            printf("%3d", matrix[i][j]);
            if (j < N - 1) printf(", ");
        }
        printf(" ]\n");
    }
}

int main() {
    
    #define N 3

    int matrixA[N][N] = {
        {9, 1, 2},
        {3, 8, 4}, 
        {5, 6, 7}
    };

    printMatrix(N, matrixA);
    
    int diagonalSum = sumMainDiagonal(N, matrixA);
    
    printf("\nMain diagonal elements: %d, %d, %d\n", 
           matrixA[0][0], matrixA[1][1], matrixA[2][2]);
    printf("Sum of main diagonal: %d\n", diagonalSum);

    return 0;
}