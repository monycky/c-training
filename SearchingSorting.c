#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void searchHighMPG(float value, float dataSet[], int len);
void printArray(char dataName[], float dataSet[], int dataLength);


int main(void){

    float mpgData[10] = {18.5, 16.2, 32.0, 40.0, 24.5, 31.2, 16.8, 22.1, 12.5, 35.5};

    searchHighMPG(30.0, mpgData, 10);

    return EXIT_SUCCESS;
}

void seachHighMPG(floar value, float dataSet[], int len){
    printf("Array received in searchHighMPG\n");
    printArray("mpgData", dataSet, len);
    printArray("Cars rated at over 32 mpg\n\n");

    for(int i =0; i<len; i++){
        if(dataSet[i] > value)
            printf("Car %d has MPG: %.1f \n", i, dataSet[i]);
    }
}

