// Traccia: Merge e Bubble Sort di due array monodimensionali

// Traccia completa:
// Scrivere un programma in "C" che, letto da tastiera due array monodimensionali di interi:
// - Stampi a video i due array;
// - Fonda i due array in un terzo array;
// - Stampi a video il terzo array;
// - Ordini il terzo array con il Bubble Sort;
// - Stampi a video il terzo array ordinato.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    int dimensione_vettore_1, dimensione_vettore_2;
    int i, j, temp;

    // Richiesta all'utente della dimensione dei due array
    printf("Inserire il numero di elementi del primo vettore: ");
    scanf("%d", &dimensione_vettore_1);
    printf("Inserire il numero di elementi del secondo vettore: ");
    scanf("%d", &dimensione_vettore_2);
    int vettore_1[dimensione_vettore_1];
    int vettore_2[dimensione_vettore_2];
    int vettore_3[dimensione_vettore_1 + dimensione_vettore_2];

    // Richiesta all'utente di inserire gli elementi del primo vettore
    printf("\nInserire gli elementi del primo vettore:\n");
    for (i = 0; i < dimensione_vettore_1; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore_1[i]);
    }

    // Richiesta all'utente di inserire gli elementi del secondo vettore
    printf("\nInserire gli elementi del secondo vettore:\n");
    for (i = 0; i < dimensione_vettore_2; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore_2[i]);
    }

    // Stampa a video dei due array inseriti
    printf("\nPrimo vettore inserito:\n");
    for (i = 0; i < dimensione_vettore_1; i++) {
        printf("%d ", vettore_1[i]);
    }

    printf("\nSecondo vettore inserito:\n");
    for (i = 0; i < dimensione_vettore_2; i++) {
        printf("%d ", vettore_2[i]);
    }

    // Merge dei due array nel terzo array
    for (i = 0; i < dimensione_vettore_1; i++) {
        vettore_3[i] = vettore_1[i];
    }

    for (i = dimensione_vettore_1; i < dimensione_vettore_1 + dimensione_vettore_2; i++) {
        vettore_3[i] = vettore_2[i - dimensione_vettore_1];
    }

    // Stampa a video del terzo array
    printf("\nTerzo vettore (risultato della fusione):\n");
    for (i = 0; i < dimensione_vettore_1 + dimensione_vettore_2; i++) {
        printf("%d ", vettore_3[i]);
    }

    // Bubble Sort per ordinare il terzo array
    for (i = 1; i < dimensione_vettore_1 + dimensione_vettore_2; i++) {
        for (j = 0; j < dimensione_vettore_1 + dimensione_vettore_2 - i; j++) {
            if (vettore_3[j] > vettore_3[j + 1]) {
                // Scambio di posizione tra gli elementi
                temp = vettore_3[j];
                vettore_3[j] = vettore_3[j + 1];
                vettore_3[j + 1] = temp;
            }
        }
    }

    // Stampa a video del terzo array ordinato
    printf("\nTerzo vettore in ordine crescente:\n");
    for (i = 0; i < dimensione_vettore_1 + dimensione_vettore_2; i++) {
        printf("%d ", vettore_3[i]);
    }

    printf("\nTerzo vettore in ordine decrescente:\n");
    for (i = dimensione_vettore_1 + dimensione_vettore_2 - 1; i >= 0; i--) {
        printf("%d ", vettore_3[i]);
    }

    return 0;
}
