#include <stdio.h>
#include <string.h>


typedef struct Books{
    char title[50];
    char author[50];

} Book;

int main(){
    Book book;

    strcpy(book.title, "I robot");
    strcpy(book.author, "Asimov")
}