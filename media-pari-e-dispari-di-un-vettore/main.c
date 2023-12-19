// Traccia:
// Scrivere un programma che, letto da tastiera un vettore di 10 elementi, stampi a video la media degli elementi,
// il numero dei valori pari e il numero dei valori dispari.

#include <stdio.h>
#include <stdlib.h>

#define NUMERI 10

int main() {
    int topolino[NUMERI];
    int i, pari = 0, dispari = 0;
    float somma = 0;

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &topolino[i]);
    }

    // Calcola la somma di tutti gli elementi del vettore
    for (i = 0; i < NUMERI; i++) {
        somma += topolino[i];
    }

    // Calcola il numero dei valori pari e dispari
    for (i = 0; i < NUMERI; i++) {
        if (topolino[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    // Calcola e stampa a video la media degli elementi, il numero dei valori pari e il numero dei valori dispari
    printf("\n-----------------------------\nInterno del vettore topolino:\n-----------------------------\n\n");
    printf("Media: %.2f\n", somma / NUMERI);
    printf("Numero vettori pari: %d\n", pari);
    printf("Numero vettori dispari: %d\n\n", dispari);
    printf("Grazie per aver usato il programma\n");

    return 0;
}
