#include <stdio.h>

#include "define.h"

int main (){


    int numbers[SIZE];
    int sumPos =  0;
    int sumNeg = 0;
    int max = 0; 
    int min = 0;

    for( int i = 0; i < SIZE; i++){
    printf("Numero %d", i + 1);
    scanf("%d", &numbers[i]);
    }


    for( int i = 0; i < SIZE; i++){
        if ( numbers [i] > 0){
            sumPos += numbers [i];
        }

    scanf("%d", &numbers[i]);
    }

    printf("\n");

    return 0;
}