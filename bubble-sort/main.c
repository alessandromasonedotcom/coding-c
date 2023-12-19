// Traccia: Bubble Sort di un array monodimensionale

// Traccia completa:
// Scrivere un programma in "C" che, letto da tastiera un array monodimensionale,
// la cui lunghezza è fornita dall'utente:
// - Stampi a video l’array;
// - Ordini l’array con il bubble sort;
// - Stampi a video l’array ordinato.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    int dimensione_vettore;
    int i, j, temp;

    // Richiesta all'utente della dimensione dell'array
    printf("Inserire il numero di elementi nell'array: ");
    scanf("%d", &dimensione_vettore);
    int vettore[dimensione_vettore];

    // Richiesta all'utente di inserire gli elementi dell'array
    for (i = 0; i < dimensione_vettore; i++) {
        printf("Inserire l'elemento numero %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }

    // Stampa a video dell'array originale
    printf("\nArray originale:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    // Bubble Sort per ordinare l'array
    for (i = 0; i < dimensione_vettore - 1; i++) {
        for (j = 0; j < dimensione_vettore - i - 1; j++) {
            if (vettore[j] > vettore[j + 1]) {
                // Scambio di posizione tra gli elementi
                temp = vettore[j];
                vettore[j] = vettore[j + 1];
                vettore[j + 1] = temp;
            }
        }
    }

    // Stampa a video dell'array ordinato
    printf("\nArray ordinato:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    return 0;
}
