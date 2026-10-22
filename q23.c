#include <stdio.h>

int main(void)
{
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 elements of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements using pointer : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}