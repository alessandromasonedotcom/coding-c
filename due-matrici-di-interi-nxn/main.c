// Traccia: Due matrici di interi NxN

// Traccia completa:
// Scrivere un programma in "C" che, letto da tastiera due matrici nxn di interi, le cui dimensioni sono fornite dall’utente:
// - Stampi a video le due matrici;
// - Verifichi se la somma degli elementi della diagonale principale della prima matrice è uguale alla somma degli elementi della diagonale principale della seconda matrice;
// - Verifichi se il prodotto degli elementi della diagonale principale della prima matrice è uguale al prodotto degli elementi della diagonale principale della seconda matrice;
// - Ordini le righe delle due matrici utilizzando Bubble Sort e stampi a video le matrici riordinate;
// - Ordini le colonne delle due matrici utilizzando Selection Sort e stampi a video le matrici riordinate.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp;
    int i, j, k;
    int somma_diagonale_1 = 0, somma_diagonale_2 = 0;
    int prodotto_diagonale_1 = 1, prodotto_diagonale_2 = 1;

    // Richiesta all'utente della dimensione delle matrici
    printf("Dimensione n: ");
    scanf("%d", &n);

    // Dichiarazione delle matrici
    int a[n][n];
    int b[n][n];

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

    // Stampa a video delle due matrici
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

    // Calcolo delle somme e dei prodotti delle diagonali principali
    for (i = 0; i < n; i++) {
        somma_diagonale_1 += a[i][i];
        somma_diagonale_2 += b[i][i];
        prodotto_diagonale_1 *= a[i][i];
        prodotto_diagonale_2 *= b[i][i];
    }

    // Verifica delle somme delle diagonali principali
    if (somma_diagonale_1 == somma_diagonale_2)
        printf("La somma delle due diagonali principali è uguale.\n");
    else
        printf("La somma delle due diagonali principali non è uguale.\n");

    // Verifica dei prodotti delle diagonali principali
    if (prodotto_diagonale_1 == prodotto_diagonale_2)
        printf("Il prodotto delle due diagonali principali è uguale.\n");
    else
        printf("Il prodotto delle due diagonali principali non è uguale.\n");

    // Bubble Sort per ordinare le righe delle matrici
    for (k = 0; k < n; k++) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
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

    // Stampa a video delle matrici riordinate per righe
    printf("\nMatrice a - Riordinato Righe:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice b - Riordinato Righe:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Selection Sort per ordinare le colonne delle matrici
    for (k = 0; k < n; k++) {
        for (i = 0; i < n - 1; i++) {
            int min_idx = i;
            for (j = i + 1; j < n; j++) {
                if (a[j][k] < a[min_idx][k]) {
                    min_idx = j;
                }
            }
            temp = a[min_idx][k];
            a[min_idx][k] = a[i][k];
            a[i][k] = temp;

            min_idx = i;
            for (j = i + 1; j < n; j++) {
                if (b[j][k] < b[min_idx][k]) {
                    min_idx = j;
                }
            }
            temp = b[min_idx][k];
            b[min_idx][k] = b[i][k];
            b[i][k] = temp;
        }
    }

    // Stampa a video delle matrici riordinate per colonne
    printf("\nMatrice a - Riordinato Colonne:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice b - Riordinato Colonne:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
