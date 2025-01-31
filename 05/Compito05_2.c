#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // inizializzazione dei numeri casuali 
    srand(time(NULL));

    // generazione del numero casuale
    int numeroSegreto = rand() % 100 + 1;
    int numeroInserito = 0;
    int contatoreTentativi = 0;

    // ciclo per gestire i tentativi
    do {
        printf("Inserisci un numero: ");
        scanf("%d", &numeroInserito);

        printf("Tentativo: %d\n", ++contatoreTentativi);
        
        if (numeroInserito < numeroSegreto) {
            printf("Il numero inserito è troppo piccolo\n");
        } 
        else if (numeroInserito > numeroSegreto) {
            printf("Il numero inserito è troppo grande\n");
        } 
        else {
            printf("Il numero inserito è esattamente uguale al numero segreto\n");
            printf("Complimenti, hai indovinato in %d tentativi!\n", contatoreTentativi);
        }

    } while (numeroInserito != numeroSegreto);  // Rimosso l'`else` errato

    return 0;
}
