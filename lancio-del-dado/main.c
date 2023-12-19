// Traccia:
// Scrivi un programma che simuli il lancio di un dado a 6 facce per 10 volte.
// Il programma dovrà caricare i risultati dei lanci in un array e successivamente visualizzare i risultati ottenuti.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_LANCI 10

void lancioDado(int risultati[], int numLanci) {
    srand(time(NULL));
    for (int i = 0; i < numLanci; i++) {
        risultati[i] = rand() % 6 + 1;
    }
}

void visualizzaArray(int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("Lancio %d: %d\n", i + 1, array[i]);
    }
}

int main() {
    int risultatiLanci[NUMERO_LANCI];

    // Genera i risultati dei lanci
    lancioDado(risultatiLanci, NUMERO_LANCI);

    // Visualizza i risultati dei lanci
    printf("Risultati dei lanci:\n");
    visualizzaArray(risultatiLanci, NUMERO_LANCI);

    return 0;
}
