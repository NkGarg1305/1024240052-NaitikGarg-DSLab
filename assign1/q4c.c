#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int mat[][COLS], int trans[][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[COLS][ROWS];
    
    transpose(mat, trans);
    
    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}