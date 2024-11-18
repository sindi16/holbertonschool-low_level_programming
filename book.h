#ifndef BOOK_H
#define BOOK_H

typedef struct Book
{
    char *title;
    char *author;
    int year;
} Book;
void init_book(Book *book, char *title, char *author, int year);
Book *create_book(const char *title, char *author, int year);
void print_book(const Book *book);
void update_year(Book *student, int new_year );
void display_book(const Book *book);
void free_book(Book *book);

#endif