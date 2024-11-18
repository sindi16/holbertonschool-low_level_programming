#include "book.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_book(Book *book, char *title, char *author, int year)
{
    if (book != NULL)
    {
        book->title = strdup(title);
        book->author = strdup(author);
        book->year = year;
    }
}
Book *create_book(const char *title, char *author, int year)
{
    Book *book = (Book*) malloc(sizeof(Book));
    if (book == NULL)
    {
        return (NULL);
    }
    init_book(book, title, author, year);
        return (book);
}

void print_book(const Book *book)
{
    if (book != NULL)
    {
        printf("title: %s, author: %s, year: %d\n", book->title, book->author, book->year);
    }
}
void update_year(Book *book, int new_year )
{
    if (book != NULL)
    {
        book->year = new_year;
    }

}
void display_book(const Book *book)
{
    if (book != NULL)
    {
        printf("the title is: %s", book->title);
        printf("the author is: %s", book->author);
        printf("the year is: %d" , book->year);
    }

}
void free_book(Book *book)
{
    if (book != NULL)
    {
        free(book->title);
        free(book->author);
        free(book);
    }
    
}

