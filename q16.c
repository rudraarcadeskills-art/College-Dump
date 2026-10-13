 // wap to create a funtion isprime(int) that accepts an integer and returns 1 if it is a prime and 0 otherwise use the returned value in main() to display the appropriate message

 #include <stdio.h>

 int isprime(int n);

 int main()
 {
     int a;
     printf("enter the number: ");
     scanf("%d", &a);

     if (isprime(a))
     {
         printf("the number is prime");
     }
     else
     {
         printf("the number is not prime");
     }

     return 0;
 }

 int isprime(int n)
 {
     if (n <= 1)
     {
         return 0;
     }
     if (n <= 3)
     {
         return 1;
     }
     if (n % 2 == 0 || n % 3 == 0)
     {
         return 0;
     }
     for (int i = 5; i * i <= n; i += 6)
     {
         if (n % i == 0 || n % (i + 2) == 0)
         {
             return 0;
         }
     }
     return 1;
 }