#include <stdio.h>

int a = 10;

void show_global(void)
{
    printf("Global variable a = %d\n", a);
}

int main(void)
{
    int a = 20;

    printf("Local variable a = %d\n", a);
    show_global();

    return 0;
}