// libreria per standard input - output 
#include <stdio.h>


// costante riciclo
#define R1 0.85
#define R2 0.75
#define R3 0.65
#define R4 0.50
#define R5 0.40


#define NAME "Lorenzo"
#define SURNAME "Spina"
#define PRINTOUT printf(" %s %s\n", NAME, SURNAME);



int main(){


PRINTOUT;


char categoria[8];
printf("Inserisci la categoria: ");
scanf("%s", categoria);

double peso = 0;
printf("Inserisci il peso: ");
scanf("%lf", &peso);


printf("\n \n");

printf("%s &lf\n", categoria, peso);

return 0;

}