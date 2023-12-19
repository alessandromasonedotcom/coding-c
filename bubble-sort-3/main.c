// Traccia: Bubble Sort e conteggio di numeri pari e dispari

// Traccia completa:
// Scrivere un programma in "C" che, letto da tastiera un array di interi monodimensionali:
// - Stampi a video l'array;
// - Ordini l'array con il Bubble Sort;
// - Stampi a video l'array ordinato;
// - Stampi a video il numero dei numeri pari e dei numeri dispari presenti nell'array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    int dimensione_vettore;
    int i, j, temp, pari = 0, dispari = 0;

    // Richiesta all'utente della dimensione dell'array
    printf("Inserire il numero di elementi: ");
    scanf("%d", &dimensione_vettore);
    int vettore[dimensione_vettore];

    // Caricamento dell'array da tastiera
    printf("\nInserire gli elementi dell'array:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }

    // Stampa a video dell'array inserito
    printf("\nElementi inseriti nell'array:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("\t%d\n", vettore[i]);
    }

    // Bubble Sort per ordinare l'array in ordine crescente
    for (i = 1; i < dimensione_vettore; i++) {
        for (j = 0; j < dimensione_vettore - i; j++) {
            if (vettore[j] > vettore[j + 1]) {
                // Scambio di posizione tra gli elementi
                temp = vettore[j];
                vettore[j] = vettore[j + 1];
                vettore[j + 1] = temp;
            }
        }
    }

    // Stampa a video dell'array ordinato
    printf("\nElementi riordinati nell'array (in ordine crescente):\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("\t%d\n", vettore[i]);
    }

    // Conteggio dei numeri pari e dispari presenti nell'array
    for (i = 0; i < dimensione_vettore; i++) {
        if (vettore[i] % 2 == 0)
            pari++;
        else
            dispari++;
    }

    // Stampa a video del numero dei numeri pari e dispari
    printf("\nNumero di elementi pari nell'array: %d\n", pari);
    printf("Numero di elementi dispari nell'array: %d\n", dispari);

    return 0;
}
