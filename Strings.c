#include <stdio.h>
#include <string.h>

int main(){

    char string1[12] = "Monycky";
    char string2[12] = "Vasconcelos";
    char string3[12] = "Frazão";
    int len;

    strcpy(string3, string1);
    printf("strcpy(string3, string1) %s\n: ", string3);

    strcat(string1, string2);
    printf("strcat(string1, string2) %s\n: ", string1);

    len = strlen(string1);
    printf("strlen(string1) %d\n: ", len);


}
