#include <stdio.h>
#include <time.h>


int *getMax(int *, int *);

int main(){
    
    int x = 100;
    int y = 200;

    int *max = NULL;

    max = getMax(&x, &x);

    printf("Max value: %d\n", *max);

    return 0;

}

int *getMax(int *m, int *n){
   
    if(*m > * n){
        return m;
    } else{
        return n;
    }
    
}