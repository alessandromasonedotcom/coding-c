// Traccia:
// Dato un vettore di N interi, inizializzati casualmente,
// si determini il valore massimo tra quelli memorizzati nel vettore e lo si stampi a video.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL));

    printf("Inserire il numero di elementi nel vettore: ");
    scanf("%d", &n);

    int* vettore = (int*)malloc(n * sizeof(int));

    // Inizializzazione casuale dei valori nel vettore
    for (int i = 0; i < n; i++) {
        vettore[i] = rand();
    }

    int massimo = vettore[0];

    // Trovare il valore massimo nel vettore
    for (int i = 1; i < n; i++) {
        if (vettore[i] > massimo) {
            massimo = vettore[i];
        }
    }

    printf("Il valore massimo nel vettore è: %d\n", massimo);

    free(vettore);

    return 0;
}
