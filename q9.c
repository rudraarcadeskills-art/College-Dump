#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    int choice;
    int i, j, k;

    do
    {
        printf("\n----- MATRIX MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &rowsA, &colsA);

            printf("Enter first matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }

            printf("Enter second matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }

            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }

            printf("Addition result:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &rowsA, &colsA);

            printf("Enter first matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }

            printf("Enter second matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }

            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    result[i][j] = A[i][j] - B[i][j];
                }
            }

            printf("Subtraction result:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter rows and columns of first matrix: ");
            scanf("%d %d", &rowsA, &colsA);

            printf("Enter rows and columns of second matrix: ");
            scanf("%d %d", &rowsB, &colsB);

            if (colsA != rowsB)
            {
                printf("Multiplication is not possible.\n");
                break;
            }

            printf("Enter first matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }

            printf("Enter second matrix:\n");
            for (i = 0; i < rowsB; i++)
            {
                for (j = 0; j < colsB; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }

            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsB; j++)
                {
                    result[i][j] = 0;

                    for (k = 0; k < colsA; k++)
                    {
                        result[i][j] =
                            result[i][j] + A[i][k] * B[k][j];
                    }
                }
            }

            printf("Multiplication result:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsB; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("Enter rows and columns: ");
            scanf("%d %d", &rowsA, &colsA);

            printf("Enter matrix:\n");
            for (i = 0; i < rowsA; i++)
            {
                for (j = 0; j < colsA; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }

            printf("Transpose:\n");
            for (j = 0; j < colsA; j++)
            {
                for (i = 0; i < rowsA; i++)
                {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
            break;

        case 5:
            printf("Program ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}