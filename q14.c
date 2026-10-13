 // wap to create a function factorial(int) that accepts a positive integer, calculates its factorial using a for loop and returns the result to main().

#include <stdio.h>
int factorial(int n);

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);

    int result = factorial(a);
    printf("the factorial of %d is: %d", a, result);

    return 0;
}

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}