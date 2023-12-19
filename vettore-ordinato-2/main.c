// Programma: Generazione di un vettore ordinato senza doppi
// Descrizione: Questo programma richiede all'utente di inserire 10 numeri interi,
//              li memorizza in un vettore, elimina i doppi sostituendoli con 0,
//              quindi stampa il vettore iniziale e quello ordinato in senso crescente.

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {
    // Dichiarazione delle variabili
    int i, j, temp;
    int a[N];

    // Richiesta all'utente di inserire 10 numeri interi
    for (i = 0; i < N; i++) {
        printf("Inserire l'elemento numero %i: ", i + 1);
        scanf("%i", &a[i]);
    }

    // Stampa del vettore originale
    printf("Vettore senza modifiche:\n");
    for (i = 0; i < N; i++) {
        printf("\t%i\n", a[i]);
    }

    // Eliminazione dei doppi nel vettore sostituendoli con 0
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[j] == a[i]) {
                a[j] = 0;
            }
        }
    }

    // Ordinamento del vettore in ordine crescente utilizzando Selection Sort
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[j] != 0 && a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Stampa del vettore con i doppi eliminati
    printf("Vettore con modifiche:\n");
    for (i = 0; i < N; i++) {
        printf("\t%i\n", a[i]);
    }

    system("PAUSE");
    return 0;
}
