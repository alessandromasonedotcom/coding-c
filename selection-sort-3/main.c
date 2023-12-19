// Traccia: Selection Sort su array bidimensionale 3x3

// Scrivere un programma che carichi un array bidimensionale 3x3 di interi in modalità randomica (valori compresi tra zero e nove):
// - stampi a video la matrice;
// - scriva quanti zeri sono memorizzati nella matrice e in quale posizione;
// - ordini (selection sort) solo le righe dispari;
// - stampi a video la matrice con le righe dispari ordinate.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int i, j, k;
    int temp;
    int righe = 3, colonne = 3;
    int a[3][3];
    int zeri_contati = 0;

    srand(time(NULL));

    // Caricamento della matrice con valori random compresi tra 0 e 9
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            a[i][j] = rand() % 10;
            if (a[i][j] == 0) {
                zeri_contati++;
            }
        }
    }

    // Stampa della matrice originale
    printf("\nMatrice generata:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf("[%d]\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Stampa delle posizioni degli zeri
    if (zeri_contati > 0) {
        printf("Zeri trovati in posizione:\n");
        for (i = 0; i < righe; i++) {
            for (j = 0; j < colonne; j++) {
                if (a[i][j] == 0) {
                    printf("(%d,%d) ", i, j);
                }
            }
        }
        printf("\n");
    } else {
        printf("Nessun zero trovato nella matrice.\n");
    }

    // Ordinamento delle righe dispari usando Selection Sort
    for (k = 0; k < righe; k++) {
        if (k % 2 != 0) { // Riga dispari
            for (i = 0; i < colonne - 1; i++) {
                for (j = i + 1; j < colonne; j++) {
                    if (a[k][j] < a[k][i]) {
                        temp = a[k][i];
                        a[k][i] = a[k][j];
                        a[k][j] = temp;
                    }
                }
            }
        }
    }

    // Stampa della matrice con le righe dispari ordinate
    printf("\nMatrice con le righe dispari ordinate:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf("[%d]\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
