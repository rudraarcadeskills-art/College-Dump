 //wap to create a function maximum(int,int) that accepts two integers and returns the larger number. display the returned value from main().

#include <stdio.h>
int maximum(int x, int y);      

int main()
{
    int a, b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);

    int result = maximum(a, b);
    printf("the maximum number is: %d", result);

    return 0;
}
{
    int maximum(int x, int y)
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
}