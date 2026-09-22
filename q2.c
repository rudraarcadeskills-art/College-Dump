#include <stdio.h>
int main()
{
    int marks, average;
    average = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("enter the marks of %d subject:", i);
        scanf("%d", &marks);
        average += marks;
    }
    average /= 5;
    printf("the average marks is %d", average);
    if (average >= 75)
        printf("grade A");
    else if (average >= 50)
        printf("grade B");
    else if (average >= 30)
        printf("grade C");
    else
        printf("FAIL");

    return 0;
}
