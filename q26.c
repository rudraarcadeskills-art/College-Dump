#include <stdio.h>
union personal
{
    char name[50];
    char date[15];
    float salary;
};

int main()
{
    union personal p;

    printf("enter person's name: ");
    scanf("%49[^\n]", p.name);
    printf("name: %s\n", p.name);

    printf("enter date of joining (DD/MM/YYYY)");
    scanf("%14s", p.date);
    printf("date: %s\n", p.date);

    printf("enter person's salary: ");
    scanf("%f", &p.salary);
    printf("salary: %f", p.salary);
}

