#include <stdio.h>

int main() {
    int a , b , max;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b); 
    max = (a>b)?a:b;
    printf("the larger number is : %d",max);

    return 0;
}