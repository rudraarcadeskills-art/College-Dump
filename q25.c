#include<stdio.h>
struct personal
{
    char name[50];
    char date[15];
    float salary;
    
};


int main ()
{
    struct personal p;

    printf("enter person's name: ");
    scanf("%[^\n]",p.name);

    printf("enter date of joining (DD/MM/YYYY)");
    scanf("%14s",p.date);

    printf("enter person's salary: ");
    scanf("%f",&p.salary);

    printf("-----Person's details--------");
    printf("\nname: %s\n",p.name);
    printf("date: %s\n",p.date);
    printf("salary: %f",p.salary);


}