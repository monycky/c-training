#include <stdio.h>
#include <stdlib.h>

#define NUM_ROLWS 2
#define NUM_COLS 3

void printTable(int table[][NUM_COLS]);

int main(void){
    
    int table[NUM_ROLWS][NUM_COLS] = {
        {132, 142, 23},
        {0, 76, 872}
    };

    printf("Row 1 Colum 2 cotains %d\n", table[1][2]);

    printTable(table);

    return EXIT_SUCCESS;

}

void printTable(int table[][NUM_COLS]){
    printf("\n The table:\n");
    for(int i=0; i<NUM_ROLWS; i++){
        for(int j=0; j<NUM_COLS; j++){
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}
