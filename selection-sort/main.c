// Programma: Unione e ordinamento di due array utilizzando Selection Sort
// Descrizione: Questo programma legge due array di interi forniti dall'utente,
//              li stampa a video, li ordina utilizzando l'algoritmo di ordinamento
//              "selection sort", unisce i due array in un nuovo array e lo stampa,
//              quindi ordina l'array unificato e lo stampa nuovamente.

#include <stdio.h>
#include <stdlib.h>

// Funzione per ordinare un array utilizzando Selection Sort
void selectionSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int dimensione_a, dimensione_b, dimensione_c;
    int i, j;
    int temp;

    printf("Inserisci dimensione vettore a: ");
    scanf("%i", &dimensione_a);
    int a[dimensione_a];
    for (i = 0; i < dimensione_a; i++) {
        printf("Inserire elemento numero %i del vettore 'a': ", i + 1);
        scanf("%i", &a[i]);
    }

    printf("\n\n\n\n");

    printf("Inserisci dimensione vettore b: ");
    scanf("%i", &dimensione_b);
    int b[dimensione_b];
    for (i = 0; i < dimensione_b; i++) {
        printf("Inserire elemento numero %i del vettore 'b': ", i + 1);
        scanf("%i", &b[i]);
    }

    printf("\n\n\n\n");

    // Stampa dei due array inseriti dall'utente
    printf("Vettore 'a' inserito:\n");
    for (i = 0; i < dimensione_a; i++) {
        printf("Elemento numero %i: %i\n", i + 1, a[i]);
    }

    printf("\n\n\n\n");

    printf("Vettore 'b' inserito:\n");
    for (i = 0; i < dimensione_b; i++) {
        printf("Elemento numero %i: %i\n", i + 1, b[i]);
    }

    printf("\n\n\n\n");

    // Ordinamento dei due array utilizzando Selection Sort
    selectionSort(a, dimensione_a);
    selectionSort(b, dimensione_b);

    // Unione dei due array in un nuovo array
    dimensione_c = dimensione_a + dimensione_b;
    int c[dimensione_c];
    for (i = 0; i < dimensione_a; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < dimensione_b; i++) {
        c[i + dimensione_a] = b[i];
    }

    // Stampa dell'array unificato
    printf("Vettore unito:\n");
    for (i = 0; i < dimensione_c; i++) {
        printf("Elemento numero %i: %i\n", i + 1, c[i]);
    }

    printf("\n\n\n\n");

    // Ordinamento dell'array unificato utilizzando Selection Sort
    selectionSort(c, dimensione_c);

    // Stampa dell'array ordinato
    printf("Vettore ordinato:\n");
    for (i = 0; i < dimensione_c; i++) {
        printf("Elemento numero %i: %i\n", i + 1, c[i]);
    }

    printf("\n\n\n\n");

    system("PAUSE");
    return 0;
}
