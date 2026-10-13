// wap to create a funtion digitsum(int) that accepts an integer and returns the sum of its digits use a While loop inside the function
#include <stdio.h>

int digitsum(int n);

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);

    int result = digitsum(a);
    printf("the sum of digits of %d is: %d", a, result);

    return 0;
}

int digitsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}