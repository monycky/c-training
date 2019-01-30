#include <stdio.h>

int main(){

    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    //take address of var
    ptr = &var;

    //take the address of ptr using address of operator &
    pptr = &ptr;

    printf("Value of var = %d\n", var);
    printf("Value avaliable at *ptr = %p\n", ptr);
    printf("Value avaliable at ptr = %d\n", *ptr);
    printf("Value avaliable at **pptr = %d\n", **pptr);

    return 0;

}