#include <stdio.h>
int main()
{
    int x, num = 1;
    while (num <= 10)
    {
        x = 1;
        printf("\ntable of %d : ", num);
        while (x <= 10)
        {
            printf("%d ", num * x);
            x++;
        }
        num++;
    }
    return 0;
}