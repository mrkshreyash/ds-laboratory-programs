#include <stdio.h>

#define MAX 10

// Reusable function to display matrices
void display(int mat[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Safety Check: Multiplication is only possible if c1 == r2
    if (c1 != r2)
    {
        printf("\nError! Columns of A must match Rows of B.\n");
        return 1;
    }

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Initializing Result Matrix with 0s
    // Crucial because we will be adding to these values
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
        }
    }

    // The Triple Loop Logic
    // i tracks rows of A, j tracks columns of B, k tracks the "shared" dimension
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResulting Matrix:\n");
    display(res, r1, c2);

    return 0;
}