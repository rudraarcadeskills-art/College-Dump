/* wap to create a funtion isEven(int) that accepts an integer and returns 1 if the number is even and 0 otherwise.
 use the returned value in an if else statement in main().*/

#include <stdio.h>

int isEven(int x);

int main()
{

    int a;
    printf("enter the number: ");
    scanf("%d", &a);

    if (isEven(a))
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

    return 0;
}



    int isEven(int x)
    {
        if (x % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

