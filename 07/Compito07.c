#include <stdio.h>
#include <stdlib.h>

// Dichiarazione delle funzioni
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);

int main() {
    int num1, num2, choice;
    float result;

    do {
        printf("Scegli un'operazione:\n");
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Esci\n");
        printf("Scegli un'operazione (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Inserisci il primo numero: ");
            scanf("%d", &num1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Risultato: %d\n", (int)result);
                break;
            case 2:
                result = sub(num1, num2);
                printf("Risultato: %d\n", (int)result);
                break;
            case 3:
                result = mul(num1, num2);
                printf("Risultato: %d\n", (int)result);
                break;
            case 4:
                result = divi(num1, num2);
                if (num2 != 0) {
                    printf("Risultato: %.2f\n", result);
                }
                break;
            case 5:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (choice != 5);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: Divisione per zero.\n");
        return 0;
    }
    return (float)a / b;
}