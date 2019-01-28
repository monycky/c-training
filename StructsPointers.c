#include <stdio.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books *book);

int main(){

    struct Books book;

    strcpy(book.title, "I Robot");

    strcpy(book.author, "Asimov");
    strcpy(book.subject, "Personal drama robot");
    book.book_id = 1234;

    return 0;
}

void printBook(struct Books *book){
    printf("Book title: %s\n" book->title);
   // printf("Book author: %s\n" book->author);
   // printf("Book subject: %s\n" book->subject);
   // printf("Book book_id: %d\n" book->book_id);

}