#include <stdio.h>

int main() {
   int a , b , s;

   printf("the value of a is ");
   scanf("%d",&a);

   printf("the value of b is ");
   scanf("%d",&b);

   s=a;
   a=b;
   b=s;

   printf("the swapped numbers are a=%d and b=%d",a,b);

    return 0;
}