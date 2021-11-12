#include <stdio.h>

// Matrix multiplication.

// 1. Ask user how many rows and columns he wants in matrix A and B respectively.
// 2. Then Identify if the matrix can be multiplied or not and tell the same to user.
// 3. Then take input of matrix from user eg: a11 a12 ..... like this, whatever he wants to multiply.
// 4. Finally print the multiplied matrix.

int main()
{

    int row_a, column_a;
    int row_b, column_b;

    printf("***Welcome to Matrix Multiplication made by Casanova...***\n");
    printf("Give following details of Matrix A and B, and we will mutiply them if possible!\n\n");

    printf("How many rows you want in Matrix A: \n");
    scanf("%d", &row_a);

    printf("How many columns you want in Matrix A: \n");
    scanf("%d", &column_a);
    printf("\n");

    printf("How many rows you want in Matrix B: \n");
    scanf("%d", &row_b);

    printf("How many columns you want in Matrix B: \n");
    scanf("%d", &column_b);
    printf("\n");

    if (column_a == row_b)
    {
        printf("Enter the following details of your MatrixA and MatrixB:\n\n");

        int matrixA[row_a][column_a];
        int matrixB[row_b][column_b];

        printf("Enter your A matrix: \n\n");
        for (int i = 0; i < row_a; i++)
        {
            for (int j = 0; j < column_a; j++)
            {
                printf("Element no: [%d,%d] is: ", i, j);
                scanf("%d", &matrixA[i][j]);
            }
        }

        printf("\n");

        printf("Enter your B matrix: \n\n");
        for (int i = 0; i < row_b; i++)
        {
            for (int j = 0; j < column_b; j++)
            {
                printf("Element no: [%d,%d] is: ", i, j);
                scanf("%d", &matrixB[i][j]);
            }
        }

        printf("Matrix A: \n");
        for (int i = 0; i < row_a; i++)
        {
            for (int j = 0; j < column_a; j++)
            {
                printf("%d ", matrixA[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        printf("Matrix B: \n");
        for (int i = 0; i < row_b; i++)
        {
            for (int j = 0; j < column_b; j++)
            {
                printf("%d ", matrixB[i][j]);
            }
            printf("\n");
        }

        printf("\n");
        int matrixC[row_a][column_b];

        printf("Multiplication of your Matrix is A x B: \n");
        for (int i = 0; i < row_a; i++)
        {
            for (int j = 0; j < column_b; j++)
            {
                matrixC[i][j] = 0;
                for (int k = 0; k < column_a; k++)
                {
                    matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }

        printf("Matrix C: \n");
        for (int i = 0; i < row_a; i++)
        {
            for (int j = 0; j < column_b; j++)
            {
                printf("%d ", matrixC[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Your Matrix is not Multiplicable!!!\n");
    }

    return 0;
}