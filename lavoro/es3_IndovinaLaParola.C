// Indovina_Parola_Segreta.c
// Lorenzo Spina 
// ITS_ICT DAI 
// 07-02-25 Torino
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "indovina.h"
#include <string.h>


char words[][20] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};

void iniziaGioco() {
    srand(time(NULL));
    int indice = rand() % 6;
    char parola[20];
    char parolaNascosta[20];
    int tentativi = 0;
    int lunghezza = strlen(words[indice]);
    
    for (int i = 0; i < lunghezza; i++) {
        parolaNascosta[i] = '*';
    }
    parolaNascosta[lunghezza] = '\0';
    
    printf("La parola da indovinare: %s\n", parolaNascosta);
    
    while (strcmp(parolaNascosta, words[indice]) != 0) {
        char lettera;
        printf("Inserisci un carattere: ");
        scanf(" %c", &lettera);
        tentativi++;
        
        int presente = 0;
        for (int i = 0; i < lunghezza; i++) {
            if (words[indice][i] == lettera) {
                parolaNascosta[i] = lettera;
                presente = 1;
            }
        }
        
        if (presente) {
            printf("Lettera presente!\n");
        } else {
            printf("Lettera non presente!\n");
        }
        
        printf("Parola attuale: %s\n", parolaNascosta);
    }
    
    printf("Hai indovinato la parola in %d tentativi!\n", tentativi);
}

int main() {
    iniziaGioco();
    return 0;
}