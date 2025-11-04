#include <stdio.h>
#include <stdbool.h> 
//Check if the elements on the diagonal of a matrix are distinct.

bool areDiagElementsDistinct(int rows, int cols, int matrix[rows][cols]) {
    
    
    int diag_len = (rows < cols) ? rows : cols;
    
    if (diag_len <= 1) {
        
        return true;
    }

    int diagonal[diag_len];
    for (int i = 0; i < diag_len; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < diag_len; i++) {
        for (int j = i + 1; j < diag_len; j++) {
        
            if (diagonal[i] == diagonal[j]) {
                printf("  Note: Duplicate found: %d\n", diagonal[i]);
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
        {9, 1, 2},
        {3, 8, 4}, 
        {5, 6, 7}
    };

    printf("Matrix A:\n");
    printMatrix(3, 3, matrixA);
    if (areDiagElementsDistinct(3, 3, matrixA)) {
        printf("Result: Matrix A's diagonal is distinct.\n");
    } else {
        printf("Result: Matrix A's diagonal is NOT distinct.\n");
    }

    printf("\n---\n\n");

    int matrixB[3][3] = {
        {9, 1, 2},
        {3, 5, 4}, 
        {5, 6, 9}
    };

    printf("Matrix B:\n");
    printMatrix(3, 3, matrixB);
    if (areDiagElementsDistinct(3, 3, matrixB)) {
        printf("Result: Matrix B's diagonal is distinct.\n");
    } else {
        printf("Result: Matrix B's diagonal is NOT distinct.\n");
    }

    return 0;
}