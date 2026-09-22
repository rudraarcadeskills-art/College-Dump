#include <stdio.h>
int main()
{
    float t = 1.0;
    int i, j , f , x;
    printf("enter the number");
    scanf("%d",&x);

    for (i= 1; i <=0; i++)
    {
        for (int j = 0; j < i; j++)
        {
            f=f*j;
        }
        t=t+(pow(x,i)/f);
    }
    
    
    return 0;
}