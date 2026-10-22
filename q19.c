#include<stdio.h>
int main()
{
    int age = 21;
    int *ptr = &age;
    int **ptr2 = &ptr;


    printf("value of age = %d\n", age);
    printf("value from single pointer = %d\n", *ptr);
    printf("value from double pointer = %d\n", **ptr2);

    printf("address of age = %p\n", &age);
    printf("address from single pointer = %p\n", *&ptr);
    printf("address from double pointer = %p\n", ptr2);

    

    return 0;

}