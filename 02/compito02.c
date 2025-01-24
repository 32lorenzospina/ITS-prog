// libreria per standard input - output 
#include <stdio.h>
#include <string.h>
#include <float.h>


#include "define.h"


int main(){


PRINTOUT;


char categoria[3];
printf("Inserisci la categoria: ");
scanf("%2s", categoria);// scrivendo 2s l'utente potrà scrivere solo due caratteri

double peso;
printf("Inserisci il peso: ");
scanf("%lf", &peso);


printf("\n \n");

double perPesoRiciclabile;

    /* stampa la dimensioe in byte del tipo float e del double
    printf("%ld &ld\n", sizeof(ftPesoRiciclabile), sizeof(dbPesoRiciclabile));

    // stampa il massimo per un float e per un double 
    printf("massimo: %lf %lf\n", FLT_MAX, DBL_MAX);

    // stampa il minimo per un float e per un double 

    printf("minimo: %lf %lf\n", FLT_MIN, DBL_MIN); */

         printf("Dati inseriti %s %lf\n", categoria, peso);
    
     if (strcmp(categoria, "R1") == 0) 
    {

        perPesoRiciclabile= PERC_R1; 
    } 
    else if (strcmp(categoria, "R2") == 0)



   {

        perPesoRiciclabile= PERC_R2; 
    } 
    else if (strcmp(categoria, "R3") == 0)


    {

        perPesoRiciclabile= PERC_R3; 
    } 
    else if (strcmp(categoria, "R4") == 0)

    {

        perPesoRiciclabile= PERC_R4; 
    } 
    else if (strcmp(categoria, "R5") == 0)
{

     perPesoRiciclabile= PERC_R5;


}
else
{
        printf("Categoria Non Valida\n");
        return 1;
    
} 


if (peso <= 0)
{
       printf("Peso Non Valido\n");
       return 1;
    
}

if (peso != 0)
{
       printf("Il Peso è Valido\n");
       return 1;
    
}

 double recuperabile = peso * perPesoRiciclabile;
 double irrecuperabile = peso - recuperabile;


printf("Peso riciclabile: %2lf\n", recuperabile);
printf("Peso irrecuperabile: %2lf\n", irrecuperabile);

return 0;

}