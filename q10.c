#include <stdio.h>
int main()
{

    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    int choice;
    int i, j, k ;

    do
    {
        printf("\n-----MATRIX MENU-----\n");
        printf("1. addition\n");
        printf("2. subtration\n");
        printf("3. multiplication\n");
        printf("4. transpose\n");
        printf("5. --exit--\n");
        printf("enter your choice:");
        scanf("%d", &choice);

        





















































    } while (condition);
    






















































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