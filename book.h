#ifndef BOOK_H
#define BOOK_H

typedef struct Book
{
    char *title;
    char *author;
    int year;
} Book;
void init_book(char *title, char *author, int year);
Book *create_book(const char *title, char *author, int year);
void print_book(const Book *book);
void update_year(Book *student, int new_year );
void free_book(Book *book);

#endif