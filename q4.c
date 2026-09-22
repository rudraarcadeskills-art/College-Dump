//wap to find of all integers greater that 100 & less than 200 and are divisible by 5
#include <stdio.h>
int main()
{
    int i, sum=0;
    do
    {
        if(i>100&&i<200)
        {
            if(i%5==0)
            {
                printf("%d ",i);
            }
        }
    } whlie(i<=200);

    
    return 0;
}