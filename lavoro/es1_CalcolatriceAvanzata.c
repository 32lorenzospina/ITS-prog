//Calcolatrice_Avanzata
// Lorenzo Spina 
// ITS_ICT DAI 
// 07-02-25 Torino

// includo librerie, i/o, file.h per il resto del programma
#include <stdio.h>
#include "operaz.h"

// Funzioni: 

// definisco la somma "add"
int add(int a, int b) {
    return a + b;
}
// definisco la sottrazione "sott"
int sott(int a, int b) {
    return a - b;
}
// definisco ls moltiplicazione "mol"
int mol(int a, int b) {
    return a * b;
}
// definisco la divisione "div"
float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: divisione per zero!\n");
        return 0.0;
    }
    return (float)a / b;
}
// definisco il modulo "mod"
int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: modulo per zero!\n");
        return 0;
    }
    return a % b;
}
// definisco la potenza "pot"
int pot(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

// Funzione per testare tutte le operazioni
void test_all_operations(int arr[], int size) {
    printf("Test delle operazioni sui numeri {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}:\n");

    for (int i = 0; i < size - 1; i++) {
        printf("%d + %d = %d\n", arr[i], arr[i + 1], add(arr[i], arr[i + 1]));
        printf("%d - %d = %d\n", arr[i + 1], arr[i], sott(arr[i + 1], arr[i]));
        printf("%d * %d = %d\n", arr[i], arr[i + 1], mol(arr[i], arr[i + 1]));
        printf("%d / %d = %.2f\n", arr[i + 1], arr[i], divi(arr[i + 1], arr[i]));
        printf("%d %% %d = %d\n", arr[i], arr[i + 1], mod(arr[i], arr[i + 1])); // avendo usato il modulo (%), il programma segna come errore la posizione del doppio simbolo percentuale, alcune estensioni evitano di visualizzare questo errore
        printf("%d ^ 2 = %d\n", arr[i + 1], pot(arr[i + 1], 2));
    }
}
// punto di accesso del programma 
int main() {
// Messaggio di benvenuto
    printf("-- Benvenuto alla Calcolatrice Avanzata!-- \n");
    printf("\n Grazie per utilizzare il nostro programma :) \n");
     printf("Utilizzando la tastiera scegli quale funzione matematica vuoi svolgere! \n");
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Ciclo infinito per permettere all'utente di scegliere ripetutamente un'operazione
    while (1) {
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo (%)\n");
        printf("6. Potenza (^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
    // Legge la scelta dell'utente tra le varie operazioni
        int choice;
        scanf("%d", &choice);

        if (choice == 8) {
            break;
        }

        if (choice == 7) {
            test_all_operations(numbers, size);
            continue;
        }
    // Richiedi all'utente di inserire due numeri per l'operazione
        int num1, num2;
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, sott(num1, num2));
                break;
            case 3:
                printf("%d * %d = %d\n", num1, num2, mol(num1, num2));
                break;
            case 4:
                printf("%d / %d = %.2f\n", num1, num2, divi(num1, num2));
                break;
            case 5:
                printf("%d %% %d = %d\n", num1, num2, mod(num1, num2));
                break;
            case 6:
                printf("%d ^ %d = %d\n", num1, num2, pot(num1, num2));
                break;
            default:
                printf("Scelta non valida!Riprova...\n"); //Opzione non valida... 
        }
    }
    printf("Grazie per aver usato la Calcolatrice Avanzata! Arrivederci!\n");
    return 0;
} // fine programma