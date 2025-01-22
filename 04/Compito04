// libreria per standard input/output 
#include <stdio.h>
#include <string.h>
// Definizione dell'IVA
#define IVA 0.22
#define CALCOLO_SPESE(spesa) ((spesa) + ((spesa) * IVA))

int main() {
  char giorno[15];
  float spesa, spesa_IVA;



  printf("Inserisci il giorno della settimana:");
  scanf("%s", giorno);

  printf("Inserisci il costo della spesa");
  scanf("%f", &spesa);

  spesa_IVA = CALCOLO_SPESE(spesa);

 if (strcmp(giorno, "sabato") == 0 || strcmp(giorno, "domenica") == 0) {
    printf("Il giorno %s è un giorno festivo.\n", giorno);
  } else {
    printf("Il giorno %s è un giorno feriale.\n", giorno);
  }

  printf("Totale spesa senza IVA: %.2f euro\n", spesa);
  printf("Totale spesa con IVA (22%%): %.2f euro\n", spesa_IVA);

  
 return 0;
}