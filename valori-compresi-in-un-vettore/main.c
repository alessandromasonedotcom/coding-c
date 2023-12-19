// Traccia:
// Dato un array di N elementi inizializzato casualmente, e due numeri forniti da tastiera,
// restituire a video quanti valori e quali nell'array sono compresi tra questi due numeri.
// Restituire anche a video la stampa dell'array capovolta.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;

    // Input del numero di elementi nell'array (deve essere maggiore di 2)
    do {
        printf("Inserire il numero di elementi nell'array (deve essere maggiore di 2): ");
        scanf("%d", &n);
    } while (n <= 2);

    int* array = (int*)malloc(n * sizeof(int));

    int min, max;

    // Input del numero minimo
    printf("Inserire il valore minimo compreso: ");
    scanf("%d", &min);

    // Input del numero massimo (deve essere maggiore o uguale al numero minimo)
    do {
        printf("Inserire il valore massimo compreso (deve essere maggiore o uguale al valore minimo): ");
        scanf("%d", &max);
    } while (max < min);

    // Inizializzazione casuale dei valori dell'array tra min e max inclusi
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
    }

    int count = 0;

    // Conteggio e stampa degli elementi compresi tra min e max
    printf("\nElementi compresi tra %d e %d:\n", min, max);
    printf("Elemento\tContenuto\n");
    for (int i = 0; i < n; i++) {
        if (array[i] >= min && array[i] <= max) {
            printf("   %d\t\t   %d\n", i, array[i]);
            count++;
        }
    }
    printf("\nNumero di elementi compresi tra %d e %d: %d\n\n", min, max, count);

    // Stampa dell'array capovolta
    printf("Vettore capovolto:\n");
    printf("Elemento\tContenuto\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("   %d\t\t   %d\n", i, array[i]);
    }

    free(array);

    printf("\n\nPremi un tasto per continuare...");
    getch();

    system("cls");

    for (int i = 0; i < 10; i++) {
        printf("Grazie di aver utilizzato il programma\n");
        sleep(1);
    }

    system("PAUSE");
    return 0;
}
