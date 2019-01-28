#include <stdio.h>
#include <string.h>


union Data{

    int i;
    float f;
    char str[20];
    
} data;


int main() {
    
    union Data data;
    printf("Memory size occupied by data: %d\n", sizeof(data));

    data.i = 10;
    printf("Data.i: %d\n", data.i);

    data.f = 220.5;
    prinft("Data.f: %s\n", data.f);

    strcpy(data.str, "C Lang");
    printf("Data.str: %s\n", data.str);

    return 0;
}