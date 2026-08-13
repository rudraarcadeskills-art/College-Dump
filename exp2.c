#include <stdio.h>

int main() 
{
    float km  , meters , feet , inches , centimeters , a ;

    printf("enter the value of a :\n");
    scanf("%f",&a);

    printf("distance in meters is :%.2f\n", 1000.00*a);
    printf("distance in inches is :%.2f\n", 39370.08*a);
    printf("distance in feet is :%.2f\n", 3280.84*a);
    printf("distance in centimeters is :%.2f\n", 100000.00*a);


    return 0;
}