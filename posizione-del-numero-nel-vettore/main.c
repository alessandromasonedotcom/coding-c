// Traccia:
// Scrivere un programma in C che acquisisca da tastiera un array di 10 elementi di tipo intero
// e restituisca a video il numero dei valori pari, il numero dei valori dispari,
// la posizione di ciascun valore pari e la posizione di ciascun valore dispari.

#include <stdio.h>
#include <stdlib.h>

#define NUMERI 10

int main() {
    int numero[NUMERI];
    int i, pari = 0, dispari = 0;

    printf("Inserisci 10 numeri interi:\n");

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    // Ciclo for per contare il numero dei valori pari e dispari
    for (i = 0; i < NUMERI; i++) {
        if (numero[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    // Stampa a video il numero dei valori pari e dispari
    printf("\nNumero di valori pari: %d", pari);
    printf("\nNumero di valori dispari: %d\n", dispari);

    // Ciclo for per stampare la posizione di ciascun valore pari e dispari
    for (i = 0; i < NUMERI; i++) {
        if (numero[i] % 2 == 0) {
            printf("Il valore %d è pari, posizione: %d\n", numero[i], i + 1);
        } else {
            printf("Il valore %d è dispari, posizione: %d\n", numero[i], i + 1);
        }
    }

    return 0;
}
