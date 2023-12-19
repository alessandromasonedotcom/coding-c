// Traccia: Bubble Sort su matrici

// Traccia completa:
// Scrivere un programma in "C" che, letto da tastiera due matrici nxn di interi,
// le cui dimensioni sono fornite dall’utente:
// - Stampi a video le due matrici;
// - Calcoli la matrice somma c = a + b;
// - Stampi a video la matrice somma;
// - Calcoli la matrice prodotto c = a * b;
// - Stampi a video la matrice prodotto;
// - Ordini ogni riga della matrice somma e della matrice prodotto utilizzando Bubble Sort;
// - Stampi a video le matrici somma e prodotto riordinate.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i, j, k, temp;

    // Richiesta all'utente della dimensione delle matrici
    printf("Dimensione n: ");
    scanf("%d", &n);
    
    // Dichiarazione delle matrici
    int a[n][n];
    int b[n][n];
    int c[n][n]; // Matrice somma
    int d[n][n]; // Matrice prodotto

    // Lettura delle matrici da tastiera
    printf("\nInserire gli elementi della matrice a:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nInserire gli elementi della matrice b:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento (%d,%d): ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Stampa a video delle matrici inserite
    printf("\nMatrice a:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice b:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Calcolo della matrice somma c = a + b
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Calcolo della matrice prodotto d = a * b
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            d[i][j] = a[i][j] * b[i][j];
        }
    }

    // Stampa a video delle matrici somma e prodotto non riordinate
    printf("\nMatrice somma (non riordinata):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice prodotto (non riordinata):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    // Bubble Sort per ordinare ogni riga delle matrici somma e prodotto
    for (k = 0; k < n; k++) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (c[k][j] > c[k][j + 1]) {
                    temp = c[k][j];
                    c[k][j] = c[k][j + 1];
                    c[k][j + 1] = temp;
                }
            }
        }
    }

    for (k = 0; k < n; k++) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (d[k][j] > d[k][j + 1]) {
                    temp = d[k][j];
                    d[k][j] = d[k][j + 1];
                    d[k][j + 1] = temp;
                }
            }
        }
    }

    // Stampa a video delle matrici somma e prodotto riordinate
    printf("\nMatrice somma (riordinata):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice prodotto (riordinata):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}
