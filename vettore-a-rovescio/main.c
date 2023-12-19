// Traccia:
// Scrivere un programma in C che legga un array di 20 elementi di tipo float
// e ne visualizzi a video il contenuto a rovescio.

#include <stdio.h>
#include <stdlib.h>

#define NUMERI 20

int main() {
    float numero[NUMERI];
    int i;

    printf("Inserisci 20 numeri float:\n");

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%f", &numero[i]);
    }

    // Stampa a video il contenuto dell'array a rovescio
    printf("\n-----------------------------\nInterno del vettore numero (a rovescio):\n-----------------------------\n");
    for (i = NUMERI - 1; i >= 0; i--) {
        printf("Il vettore %d contiene \t%f\n", i + 1, numero[i]);
    }

    return 0;
}
