#include<stdio.h>

int main(){

    int a , b , sub , mul , div , mod , add ;

    printf("enter the value of a :\n");
    scanf("%d",&a);
    
    printf("enter the value of b :\n");
    scanf("%d",&b);
    
    printf("the add of a and b is %d\n the sub of a and b is %d\n the mul of a and b is %d\n the div of a and b is %d\n the mod of a and b is %d\n", a+b,a-b,a*b,a/b,a%b);
    return 0;
}