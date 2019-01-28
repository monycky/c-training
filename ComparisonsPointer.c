#include <stdio.h>

const int MAX  = 3;

int main(){

    int var[] = {10, 100, 200};
    int i, *ptr;

    ptr = var;
    i = 0;

    while (ptr <= &var[MAX -1]){
        printf("Adress of var[%d] = %p\n", i, ptr);
        printf("Adress of var[%d] = %d\n", i, *ptr);

        ptr++;
        i++;
    }
    return 0;
}