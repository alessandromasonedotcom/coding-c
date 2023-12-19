// Traccia: I primi 11 multipli
//
// Scrivere i primi 11 multipli di un numero inserito da tastiera.
//

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("cls")" per la pulizia dello schermo)

#define NUMERO_DI_MULTIPLI 11 // Costante per indicare il numero di multipli da calcolare

int main() { // Corpo del programma
    int n = 0; // Dichiarazione variabile per il numero inserito

    printf("Gli %i multipli del tuo numero\nInserisci il numero: ", NUMERO_DI_MULTIPLI);
    scanf("%i", &n); // Lettura del numero inserito da tastiera

    system("cls"); // Pulizia dello schermo

    for (int i = 1; i <= NUMERO_DI_MULTIPLI; i++) { // Ciclo per calcolare i primi 11 multipli
        int s = n * i; // Calcolo del multiplo
        printf("%i\n", s); // Stampa del multiplo ottenuto
    }

    return 0; // Tutto ok
}
