#include <stdio.h>

// Using a constant makes it easy to change the grid size later
#define MAX_SIZE 10

// Function to read matrix data from the user
void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, char name) {
    printf("\nEnter elements for Matrix %c:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix in a grid format
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Move to next line after each row
    }
}

int main() {
    int firstMatrix[MAX_SIZE][MAX_SIZE];
    int secondMatrix[MAX_SIZE][MAX_SIZE];
    int sumResult[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("--- Matrix Addition Tool ---\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // 1. Get input for both matrices
    readMatrix(firstMatrix, rows, cols, 'A');
    readMatrix(secondMatrix, rows, cols, 'B');

    // 2. Perform Addition
    // We visit every "cell" [i][j] and add values from A and B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumResult[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    // 3. Show the final result
    printf("\nMatrix A:\n");
    displayMatrix(firstMatrix, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(secondMatrix, rows, cols);

    printf("\nResulting Sum Matrix:\n");
    displayMatrix(sumResult, rows, cols);

    return 0;
}