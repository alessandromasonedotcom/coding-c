// Traccia: Bubble Sort 5

// Traccia completa:
// Scrivere un programma in "C" che, acquisiti in maniera randomica i valori interi (compresi tra 1 e 10) di una matrice bidimensionale,
// le cui dimensioni sono fornite dall'utente (n e m con n diverso da m), restituisca a video:
// - La stampa della matrice;
// - L'ordinamento delle righe con il Bubble Sort e la stampa della matrice;
// - L'ordinamento delle colonne con il Bubble Sort e la stampa della matrice.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int righe, colonne, temp;
    int i, j, k;
    srand(time(NULL));
    
    // Input righe e colonne
    printf("Dimensione righe: ");
    scanf("%d", &righe);
    
    do {
        printf("[!] Diverso da %d\nDimensione colonne: ", righe);
        scanf("%d", &colonne);
    } while (colonne == righe);

    // Dichiarazione matrici
    int a[righe][colonne];
    int b[righe][colonne];

    // Caricamento matrici in maniera casuale
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            a[i][j] = rand() % 10 + 1;
            b[i][j] = rand() % 10 + 1;
        }
    }

    // Output matrici originali
    printf("\nMatrice a:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice b:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    // Bubble Sort per ordinare le righe delle matrici
    for (k = 0; k < righe; k++) {
        for (i = 0; i < colonne - 1; i++) {
            for (j = 0; j < colonne - i - 1; j++) {
                if (a[k][j] > a[k][j + 1]) {
                    temp = a[k][j];
                    a[k][j] = a[k][j + 1];
                    a[k][j + 1] = temp;
                }
                if (b[k][j] > b[k][j + 1]) {
                    temp = b[k][j];
                    b[k][j] = b[k][j + 1];
                    b[k][j + 1] = temp;
                }
            }
        }
    }

    // Output matrici riordinate per righe
    printf("\na - Riordinato Righe:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nb - Riordinato Righe:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    // Bubble Sort per ordinare le colonne delle matrici
    for (k = 0; k < colonne; k++) {
        for (i = 0; i < righe - 1; i++) {
            for (j = 0; j < righe - i - 1; j++) {
                if (a[j][k] > a[j + 1][k]) {
                    temp = a[j][k];
                    a[j][k] = a[j + 1][k];
                    a[j + 1][k] = temp;
                }
                if (b[j][k] > b[j + 1][k]) {
                    temp = b[j][k];
                    b[j][k] = b[j + 1][k];
                    b[j + 1][k] = temp;
                }
            }
        }
    }

    // Output matrici riordinate per colonne
    printf("\na - Riordinato Colonne:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nb - Riordinato Colonne:\n");
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
