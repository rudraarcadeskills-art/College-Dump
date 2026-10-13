// wap to create a function square(int) that accepts an integer and returns its square. display the returned result in main()

/* wap to create a funtion isEven(int) that accepts an integer and returns 1 if the number is even and 0 otherwise.
 use the returned value in an if else statement in main().*/

 //wap to create a function maximum(int,int) that accepts two integers and returns the larger number. display the returned value from main().

 // wap to create a function factorial(int) that accepts a positive integer, calculates its factorial using a for loop and returns the result to main().

 // wap to create a funtion digitsum(int) that accepts an integer and returns the sum of its digits use a While loop inside the function

 // wap to create a funtion isprime(int) that accepts an integer and returns 1 if it is a prime and 0 otherwise use the returned value in main() to display the appropriate message

// wap that uses separate funt to determine whether a given number is even/odd, positive/negative and prime/not prime read the number onc in main() and pass it to the appropriate functions

 #include<stdio.h>
int a;
 int square(int x);

 int main(){
    printf("enter the number: ");
    scanf("%d",&a);

   int result = square(a);
    printf("square = %d",result);


 }


 int square(int x){
    return x*x;
 }

