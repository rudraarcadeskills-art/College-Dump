#include <stdio.h>

int main() {
    int a , b ,c, max;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b); 
    printf("enter the value of c:");
    scanf("%d",&c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("the larger number is : %d",max);

    return 0;
}