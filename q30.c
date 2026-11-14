#include <stdio.h>
union book
{
    int book_id;
    char title[100];
    float price;
};

int main()
{
    union book books[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter details of book %d:\n", i + 1);
        printf("enter book id: ");
        scanf("%d", &books[i].book_id);

        printf("enter book title :");
        scanf("%s", books[i].title);

        printf("enter price of book:");
        scanf("%f", &books[i].price);
    }

    printf("-----Book details--------");

    for (int i = 0; i < 5; i++)
    {
        printf("\nbook %d\n", i + 1);
        printf("book ID: %d\n", books[i].book_id);
        printf("book title: %s\n", books[i].title);
        printf("book price: %.2f\n", books[i].price);
    }
}
