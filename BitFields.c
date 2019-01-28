#include <stdio.h>
#include <string.h>

struct{
    unsigned int widthValidated: 1;
    unsigned int heightValidated : 2;

} status1;


int main(){
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
}