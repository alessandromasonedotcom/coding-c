// Traccia: Scrivere un programma in C che acquisisca da tastiera due array monodimensionali le cui dimensioni sono
// fornite (oppure da 6 elementi) da tastiera. Il programma dovrà restituire in output un terzo array che contenga
// l'accodamento del secondo al primo array. In particolare, gli elementi dei primi due array che si trovano in posizione
// dispari dovranno ritrovarsi in posizioni pari, e quelli in posizioni pari dovranno ritrovarsi in posizioni dispari.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funzione per richiedere la dimensione del vettore con controllo
int richiediDimensioneVettore() {
    int size;
    do {
        printf("Inserire il numero di elementi del vettore (deve essere maggiore di 0): ");
        scanf("%d", &size);
        if (size <= 0) {
            printf("[!] Il valore immesso non e' valido. Riprovare.\n");
        }
    } while (size <= 0);
    return size;
}

// Funzione per il caricamento del vettore
void caricamentoVettore(int vettore[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Inserisci il %d valore del vettore: ", i + 1);
        scanf("%d", &vettore[i]);
    }
}

// Funzione per concatenare il secondo vettore al primo con scambio di posizioni pari e dispari
void concatenaVettori(int vettore_A[], int vettore_B[], int vettore_C[], int size_A, int size_B) {
    int j = 0;
    for (int i = 0; i < size_A; i += 2) {
        vettore_C[j] = vettore_A[i + 1];
        j++;
        vettore_C[j] = vettore_A[i];
        j++;
    }
    for (int i = 0; i < size_B; i += 2) {
        vettore_C[j] = vettore_B[i + 1];
        j++;
        vettore_C[j] = vettore_B[i];
        j++;
    }
}

// Funzione per visualizzare il vettore
void visualizzaVettore(int vettore[], int size) {
    printf("Elemento\tContenuto\n");
    for (int i = 0; i < size; i++) {
        printf("%7d\t%7d\n", i + 1, vettore[i]);
    }
    printf("----------------------------------------------------\n");
}

// Funzione principale del programma
int main() {
    int size_A, size_B;

    // Richiedi la dimensione dei due vettori
    printf("Dimensione del primo vettore:\n");
    size_A = richiediDimensioneVettore();
    int vettore_A[size_A];
    caricamentoVettore(vettore_A, size_A);

    printf("Dimensione del secondo vettore:\n");
    size_B = richiediDimensioneVettore();
    int vettore_B[size_B];
    caricamentoVettore(vettore_B, size_B);

    int size_C = size_A + size_B;
    int vettore_C[size_C];
    concatenaVettori(vettore_A, vettore_B, vettore_C, size_A, size_B);

    printf("\nTerzo vettore (vettore C) dopo l'accodamento con scambio posizioni pari e dispari:\n");
    visualizzaVettore(vettore_C, size_C);

    return 0;
}
