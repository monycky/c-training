#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is test for fprint..\n");

    fputs("This is testing fpr fputs...\n", fp);

    fclose(fp);

}