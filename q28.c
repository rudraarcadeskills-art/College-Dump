// create a structure book containing book_id, title and price. store details of 5 books and display them

#include <stdio.h>

union book_id
{
    int value;
};

union book_title
{
    char value[100];
};

union book_price
{
    float value;
};

int main(void)
{
    union book_id book_ids[5];
    union book_title book_titles[5];
    union book_price book_prices[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &book_ids[i].value);

        printf("Book title: ");
        scanf(" %99[^\n]", book_titles[i].value);

        printf("Price: ");
        scanf("%f", &book_prices[i].value);
    }

    printf("\n----- Book Details -----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: %d\n", book_ids[i].value);
        printf("Book title: %s\n", book_titles[i].value);
        printf("Book price: %.2f\n", book_prices[i].value);
    }

    return 0;
}