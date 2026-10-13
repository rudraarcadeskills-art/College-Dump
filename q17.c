// wap that uses separate funt to determine whether a given number is even/odd, positive/negative and prime/not prime read the number onc in main() and pass it to the appropriate functions

#include <stdio.h>
int isEven(int x);
int isPositive(int x);
int isPrime(int x);

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);

    if (isEven(a))
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }

    if (isPositive(a))
    {
        printf("the number is positive\n");
    }
    else
    {
        printf("the number is negative\n");
    }

    if (isPrime(a))
    {
        printf("the number is prime\n");
    }
    else
    {
        printf("the number is not prime\n");
    }

    return 0;
}

int isEven(int x)
{
    return (x % 2 == 0);
}

int isPositive(int x)
{
    return (x > 0);
}

int isPrime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    if (x <= 3)
    {
        return 1;
    }
    if (x % 2 == 0 || x % 3 == 0)
    {
        return 0;
    }
    for (int i = 5; i * i <= x; i += 6)
            return 0;
        }
     }
     return 1;
 }