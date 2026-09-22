#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[10][10], int b[10][10],
               int result[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrix(int a[10][10], int b[10][10],
                    int result[10][10],
                    int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[10][10],
                     int transpose[10][10],
                     int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10];
    int addition[10][10];
    int multiplication[10][10];
    int transpose[10][10];

    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    inputMatrix(a, r1, c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    inputMatrix(b, r2, c2);

    printf("\nFirst Matrix:\n");
    displayMatrix(a, r1, c1);

    printf("\nSecond Matrix:\n");
    displayMatrix(b, r2, c2);

    /* Matrix Addition */
    if(r1 == r2 && c1 == c2)
    {
        addMatrix(a, b, addition, r1, c1);

        printf("\nMatrix Addition:\n");
        displayMatrix(addition, r1, c1);
    }
    else
    {
        printf("\nMatrix addition is not possible.\n");
    }

    /* Matrix Multiplication */
    if(c1 == r2)
    {
        multiplyMatrix(a, b, multiplication, r1, c1, c2);

        printf("\nMatrix Multiplication:\n");
        displayMatrix(multiplication, r1, c2);
    }
    else
    {
        printf("\nMatrix multiplication is not possible.\n");
    }

    /* Transpose of first matrix */
    transposeMatrix(a, transpose, r1, c1);

    printf("\nTranspose of First Matrix:\n");
    displayMatrix(transpose, c1, r1);

    return 0;
}