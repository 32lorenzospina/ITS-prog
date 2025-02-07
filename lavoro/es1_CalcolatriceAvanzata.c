//Calcolatrice_Avanzata
// Lorenzo Spina 
// ITS_ICT DAI 
// 07-02-25 Torino
#include <stdio.h>
#include "operaz.h"

// Funzioni
int add(int a, int b) {
    return a + b;
}

int sott(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: divisione per zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: modulo per zero!\n");
        return 0;
    }
    return a % b;
}

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
        printf("%d * %d = %d\n", arr[i], arr[i + 1], mul(arr[i], arr[i + 1]));
        printf("%d / %d = %.2f\n", arr[i + 1], arr[i], divi(arr[i + 1], arr[i]));
        printf("%d %% %d = %d\n", arr[i], arr[i + 1], mod(arr[i], arr[i + 1])); // avendo usato il modulo (%), il programma segna come errore la posizione del doppio simbolo percentuale, per poter evitare l'errore 
        printf("%d ^ 2 = %d\n", arr[i + 1], pot(arr[i + 1], 2));
    }
}

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    while (1) {
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo (%)\n");
        printf("6. Potenza (^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
        printf("Scegli un'operazione! (1-8): ");

        int choice;
        scanf("%d", &choice);

        if (choice == 8) {
            break;
        }

        if (choice == 7) {
            test_all_operations(numbers, size);
            continue;
        }

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
                printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
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
                printf("Scelta non valida!Riprova...\n");
        }
    }

    return 0;
}