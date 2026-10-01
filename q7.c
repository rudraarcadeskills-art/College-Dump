#include <stdio.h>

int main(void) {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int A[rowsA][colsA];
    int B[rowsB][colsB];
    int result[rowsA][colsB];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++)
            printf("%d ", result[i][j]);

        printf("\n");
    }

    return 0;
}