#include <stdio.h>
void main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sumMatrix[rows][cols];
    int diffMatrix[rows][cols];                                                                                    
    printf("For the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("For the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }
    printf("Difference of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diffMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d\t", diffMatrix[i][j]);
        }
        printf("\n");
    }
}

