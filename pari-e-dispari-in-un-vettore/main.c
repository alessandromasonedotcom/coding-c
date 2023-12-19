// Traccia: Scrivere un programma che acquisito da tastiera un array di 15 numeri interi,
// restituisce a video il numero dei pari e dei dispari.

#include <stdio.h>
#include <stdlib.h>

// Dichiarazione funzione di ringraziamento
void banner(void) {
    printf("Grazie di aver utilizzato il programma\n");
}

int main() {
    // Dichiarazione e inizializzazione dell'array di 15 elementi
    int array[15];
    int pari = 0, dispari = 0, i;

    // Input dei valori nell'array
    for (i = 0; i < 15; i++) {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Verifica se i valori sono pari o dispari e conteggio
    for (i = 0; i < 15; i++) {
        if (array[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    // Output a video del numero di pari e dispari
    printf("Pari: %d\n", pari);
    printf("Dispari: %d\n", dispari);

    // Chiusura programma
    getch();
    system("cls");
    banner();

    return 0;
}
