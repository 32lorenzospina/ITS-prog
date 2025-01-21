// include standard input/output library
#include <stdio.h>

// main function - the entry point 
// the return value of the main is an integer
int main()
{
    // variable of 32 chars
    char nome[32];
    char cognome[32];

    // ask for a name
        printf("Inserisci il tuo nome: ");

        // read the input of the user
        scanf("%s", nome);
    
        printf("Inserisci il tuo cognome: ");

        // read the input of the user
        scanf("%s", cognome);

        // print a message with the name entered
        printf("\nBenvenuto, %s %s\n\n\n", nome, cognome);
 
        printf("\nGrazie per aver usato il nostro programma\n"); 

        printf("\n Ti auguriamo Buone feste \n");
                
        printf("   *\n  ***\n *****\n*******\n  ***\n");
                       
        
    /* return 0: indicated that the program is terminated
       successfully */
    return 0;
}