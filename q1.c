#include <stdio.h>
int main()
{
    int a;
    printf("enter the 10 numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("the number is even\n");
        }
        else
        {
            printf("the number is odd\n");
        }
    }
    return 0;
}