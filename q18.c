#include<stdio.h>
int main()
{
    int age = 21;
    int *ptr = &age;
    printf("age = %d\n", age);
    printf("address of age = %p\n", &age);

    *ptr = 20;
    printf("new age = %d\n", age);

    return 0;

}