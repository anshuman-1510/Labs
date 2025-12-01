// 3.	Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 

#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void displayBook(struct Book b) {
    printf("ENTER BOOK DETAILS\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author Name: %s\n", b.author);
    printf("Price: Rs. %.2f\n", b.price);
}
int main() {
    struct Book book;
    printf("ENTER BOOK DETAILS\n");

    printf("Enter Book ID: ");
    scanf("%d", &book.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book.author);

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    return 0;
}