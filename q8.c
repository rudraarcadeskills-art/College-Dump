#include <stdio.h>
int main()
{
    int rowsA, colsA, rowsB, colsB;

    printf("enter the rows and columns of first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("enter the rows and columns of second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB)
    {
        printf("matrix multiplication not possible\n");
        return 1;
    }

    int A[rowsA][colsA], B[rowsB][colsB], result[rowsA][colsB];

    printf("enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("resultant matrix:\n");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}