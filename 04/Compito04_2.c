
#include <stdio.h>

#define CALCOLA_PENALE 1 // Abilitare il calcolo della penale
#define SOGLIA 400 // Soglia per le spese

int main() {
    float elettricita, acqua, gas, internet, totale, penale = 0;
    
    // Input delle spese
    printf("Inserisci le spese mensili:\n");
    printf("Elettricità: ");
    scanf("%f", &elettricita);
    printf("Acqua: ");
    scanf("%f", &acqua);
    printf("Gas: ");
    scanf("%f", &gas);
    printf("Internet: ");
    scanf("%f", &internet);
    
    totale = elettricita + acqua + gas + internet;

    #ifdef CALCOLA_PENALE
    // Calcolo della penale
    penale = totale * 0.10; // 10% di penale
    totale += penale;
    #endif

    // Controllo soglia
    if (totale > SOGLIA) {
        printf("Attenzione: le spese totali superano la soglia di %f\n", SOGLIA);
    } else {
        printf("Le spese sono sotto controllo.\n");
    }

    // Suggerimenti di risparmio
    switch ((int)(totale / 50)) {
        case 0: 
            printf("Ottimo! Continua così.\n");     
            break;
        case 1:
            printf("Considera di ridurre i consumi.\n");
            break;
        default:
            printf("È necessario un piano di risparmio.\n");
            break;
    }

    // Riepilogo finale
    printf("Riepilogo spese:\nElettricità: %f\nAcqua: %f\nGas: %f\nInternet: %f\nTotale: %f\n", elettricita, acqua, gas, internet, totale);
    
     
    return 0;
} 