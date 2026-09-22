#include <stdio.h>
int main()
{
    int choice, add, subtract, multiply, divide, a, b;
    while(1)
    {
        printf("enter the choice\n");
        printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
        scanf("%d", &choice);
        if (choice == 5)
            break;
        printf("enter the two numbers\n");
        scanf("%d %d", &a, &b);
        switch (choice)
        {
        case 1:
            add = a + b;
            printf("the addition is %d\n", add);
            break;
        case 2:
            subtract = a - b;
            printf("the subtraction is %d\n", subtract);
            break;
        case 3:
            multiply = a * b;
            printf("the multiplication is %d\n", multiply);
            break;
        case 4:
            divide = a / b;
            printf("the division is %d\n", divide);
            break;
        default:
            printf("invalid choice\n");
        }
    }

    return 0;
}