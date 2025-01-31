#include <stdio.h>

int main(){

int num = 0, sum = 0, max = 0, len = 0;

printf("Inserisci un numero (0 per terminare il programma) : ");
scanf("%d", &num);

while( num != 0)
{

    if (num > 0)
    {
       // calcolo della somma
        sum += num;
        // determinazione del numero max
        if (num > max){
            max = num;
        
        }
        // memorizzatore del contatore dei numeri inseriti
        len++;
    }
    else{
        // mess di errore per segnalare input non corretto 
      printf( "Il numero inserito non è positivo\n");
      printf( "Inserisci un nuovo numero\n");


    }
  // comtrollo se sono stati inseriti dei numeri
    if (len > 0){
    printf("\nInformazioni raccolte:\n");
        printf("Somma Totale: %d\n", sum);
            printf("Massimo %d\n", max);
                 printf("Contatore numero inseriti: %d\n", len);

    
    }
   else {
      // stampa che non e' stato inserito nessun numero
      printf("\nNessun dato da visualizzare\n");
  }
}
return 0;

}