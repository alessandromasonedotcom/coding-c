// Programma: Generazione di un vettore casuale di 30 numeri interi minori di 1000,
//            eliminazione dei doppi e ordinamento crescente del vettore.
// Descrizione: Questo programma genera casualmente 30 numeri interi minori di 1000,
//              li memorizza in un vettore, elimina i doppi sostituendoli con 0,
//              quindi stampa il vettore iniziale e quello ordinato in senso crescente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30

int main() {
    // Dichiarazione delle variabili
    int i, j, temp;
    int a[N];

    // Impostazione del seme per la generazione casuale
    srand(time(NULL));

    // Generazione casuale dei 30 numeri interi e memorizzazione nel vettore
    for (i = 0; i < N; i++) {
        a[i] = rand() % 1000;
    }

    // Stampa del vettore originale
    printf("Vettore senza modifiche:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

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
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Stampa del vettore con i doppi eliminati
    printf("Vettore con modifiche:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
