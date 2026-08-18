#include <stdio.h>

int main() {
   int a , b ;

   printf("the value of a is ");
   scanf("%d",&a);

   printf("the value of b is ");
   scanf("%d",&b);

   a=a+b;
   b=a-b;
   a=a-b;

   printf("the swapped numbers are a=%d and b=%d",a,b);

    return 0;
}

// 1 2 4 8 16 32 64 
// 1 1 1 0 0 1 0 