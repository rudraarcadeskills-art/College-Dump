// create a structure containing book id, title , price . read and display book information using structure

#include<stdio.h>
struct book
{
    int book_id;
    char title[100];
    float price;
    
};


int main ()
{
    struct book b;

    printf("enter book id: ");
    scanf("%d",&b.book_id);

    printf("enter book title :");
    scanf("%s",b.title);

    printf("enter price of book:");
    scanf("%f",&b.price);

     printf("-----Book details--------");
     printf("\nbook id: %d\n",b.book_id);
     printf("book title: %s\n",b.title);
    printf("book price: %.2f",b.price);


}