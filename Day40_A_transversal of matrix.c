#include <stdio.h>

//Perform diagonal traversal of a matrix.

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

void printMainDiagonal(int N, int matrix[N][N]) {
    printf("Main Diagonal:\n  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

void printAntiDiagonal(int N, int matrix[N][N]) {
    printf("\nAnti-Diagonal:\n  ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][N - 1 - i]);
    }
    printf("\n");
}

void printAllDiagonals(int N, int matrix[N][N]) {
    printf("\nFull Diagonal Traversal (all anti-diagonals):\n");
    
    int maxSum = 2 * (N - 1);
    for (int k = 0; k <= maxSum; k++) {
        printf("  Sum = %-2d: ", k);
        for (int i = 0; i < N; i++) {
            int j = k - i;
            if (j >= 0 && j < N) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    
    #define N 4

    int matrixA[N][N] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printMatrix(N, matrixA);
    printf("\n----------------------------------\n");
    
    printMainDiagonal(N, matrixA);
    
    printf("\n----------------------------------\n");

    printAntiDiagonal(N, matrixA);

    printf("\n----------------------------------\n");

    printAllDiagonals(N, matrixA);

    return 0;
}