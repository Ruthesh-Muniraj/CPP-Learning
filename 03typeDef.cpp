#include <iostream>
#include<cstring>

// use to give a type a new name
// syntax: typedef type newname;

typedef struct Books    //typedef declaration
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main()
{

    Book book;  //new type

    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;

    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);

    return 0;
}