#include <stdio.h>

int main ()  {
    int number = 0;

    do  {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Il numero deve essere intero, uguale o maggiore di 1\n");
        }
    } while (number <= 0);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  
    }

    printf("\n\n");
    return 0;
}
