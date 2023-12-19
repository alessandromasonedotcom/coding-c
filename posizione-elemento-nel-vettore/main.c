// Traccia:
// Scrivere un programma che, letto da tastiera un vettore di 10 elementi, stampi a video la somma degli elementi,
// la somma degli elementi in posizione pari, la somma degli elementi in posizione dispari e mostri gli elementi pari.

#include <stdio.h>
#include <stdlib.h>

#define NUMERI 10

int main() {
    int topolino[NUMERI];
    int i, somma_pari = 0, somma_dispari = 0, somma_totale = 0;

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &topolino[i]);
    }

    // Calcola la somma degli elementi e separa la somma degli elementi pari e dispari
    for (i = 0; i < NUMERI; i++) {
        somma_totale += topolino[i]; // Somma di tutti gli elementi
        if (i % 2 == 0) { // Se la posizione è pari
            somma_pari += topolino[i]; // Somma degli elementi in posizione pari
        } else { // Se la posizione è dispari
            somma_dispari += topolino[i]; // Somma degli elementi in posizione dispari
        }
    }

    // Stampa a video delle somme calcolate
    printf("\nSomma degli elementi: %d", somma_totale);
    printf("\nSomma degli elementi in posizione pari: %d", somma_pari);
    printf("\nSomma degli elementi in posizione dispari: %d", somma_dispari);

    // Stampa a video degli elementi pari
    printf("\n\nElementi pari: ");
    for (i = 0; i < NUMERI; i++) {
        if (topolino[i] % 2 == 0) {
            printf("%d ", topolino[i]);
        }
    }

    printf("\n");

    return 0;
}
