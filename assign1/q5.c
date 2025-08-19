#include <stdio.h>

#define ROWS 3
#define COLS 3

void rowColumnSum(int mat[][COLS]) {
    int rowSum[ROWS] = {0};
    int colSum[COLS] = {0};
    
    // Calculate row sums
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSum[i] += mat[i][j];
        }
    }
    
    // Calculate column sums
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            colSum[j] += mat[i][j];
        }
    }
    
    // Display results
    printf("Row sums:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i+1, rowSum[i]);
    }
    
    printf("\nColumn sums:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j+1, colSum[j]);
    }
}

int main() {
    int mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    rowColumnSum(mat);
    
    return 0;
}