// create a structure marks in three subjects emmbed it inside a student structure containing rollno and name . calculate total and percentage
#include <stdio.h>

struct marks
{
    float subject1;
    float subject2;
    float subject3;
};

struct student
{
    int rollno;
    char name[100];
    struct marks m;
};

int main()
{
    struct student s;
    float total, percentage;

    printf("enter roll number:");
    scanf("%d",&s.rollno);

    printf("enter name:");
    scanf("%99s", s.name);

    printf("enter marks of subject 1 :");
    scanf("%f", &s.m.subject1);

    printf("enter marks of subject 2 :");
    scanf("%f", &s.m.subject2);

    printf("enter marks of subject 3 :");
    scanf("%f", &s.m.subject3);

    total = s.m.subject1 + s.m.subject2 + s.m.subject3;
    percentage = total / 300 * 100;

    printf("---------------details-------------------\n");
    printf("student name: %s\n",s.name);
    printf("student roll number: %d\n",s.rollno);
    printf("student total marks: %.2f\n", total);
    printf("student percentage: %.2f%%\n", percentage);

    return 0;
}