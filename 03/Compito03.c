// libreria per standard input/output 
#include <stdio.h>

// Definizione delle macro per i calcoli matematici
#define somma(a, b) ((a) + (b))
#define sottrazione(a, b) ((a) - (b))
#define moltiplicazione(a, b) ((a) * (b))
#define divisione(a, b) ((b) != 0 ? ((double)(a) / (b)) : 0) 
#define modulo(a, b) ((b) != 0 ? ((a) % (b)) : 0)            

// Definizione di macro per il nome 
#define NAME "Lorenzo"
#define SURNAME "Spina"
#define PRINTOUT printf("%s %s\n", NAME, SURNAME);

// Funzione main
int main() {
    int x = 10, y = 5, z = 3;

    // Stampa nome e cognome
    PRINTOUT;

    // print dei calcoli matematici somma, sottrazione ......
    printf("Somma: %d\n", somma(x, y));
    printf("Sottrazione: %d\n", sottrazione(x, y));
    printf("Moltiplicazione: %d\n", moltiplicazione(x, y));
    printf("Divisione: %.2f\n", divisione(x, y));
    printf("Modulo: %d\n", modulo(x, y));

    // Calcolo complesso ditutte le operazioni matematiche dichiarate
    double risultato = divisione(
        somma(moltiplicazione(x, z), modulo(y, z)),
        sottrazione(x, y)
    );
    // Stampa del risultato
    printf("\nCalcolo complesso:\n");
    printf("Risultato = %.2f\n", risultato);
// se il risultato è diverso da 0 il programma ha un errore
    return 0;
}
