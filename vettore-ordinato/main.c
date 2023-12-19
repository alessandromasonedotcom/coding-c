// Programma: Ordinamento di un vettore con Selection Sort
// Descrizione: Questo programma legge un vettore di dimensione fornita dall'utente,
//              stampa l'array originale, lo ordina con l'algoritmo Selection Sort,
//              quindi stampa l'array ordinato in ordine crescente e decrescente.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    int dimensione_vettore, i, j, temp;

    // Lettura della dimensione del vettore dall'utente
    printf("Inserire il numero di elementi nel vettore: ");
    scanf("%d", &dimensione_vettore);

    // Dichiarazione e inizializzazione del vettore
    int vettore[dimensione_vettore];

    // Lettura degli elementi del vettore dall'utente
    printf("Inserisci gli elementi del vettore:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }

    // Stampa dell'array originale
    printf("Vettore originale:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    // Algoritmo di Selection Sort per ordinare il vettore in ordine crescente
    for (i = 0; i < dimensione_vettore - 1; i++) {
        for (j = i + 1; j < dimensione_vettore; j++) {
            if (vettore[j] < vettore[i]) {
                temp = vettore[i];
                vettore[i] = vettore[j];
                vettore[j] = temp;
            }
        }
    }

    // Stampa dell'array ordinato in ordine crescente
    printf("Vettore in ordine crescente:\n");
    for (i = 0; i < dimensione_vettore; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    // Stampa dell'array ordinato in ordine decrescente
    printf("Vettore in ordine decrescente:\n");
    for (i = dimensione_vettore - 1; i >= 0; i--) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
