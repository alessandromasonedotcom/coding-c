// Traccia: Selection Sort sulla matrice

// Scrivere un programma che letta da tastiera una matrice bidimensionale di interi le cui dimensioni sono fornite dall’utente:
// - stampi a video la matrice inserita dall’utente;
// - ordini le righe della matrice usando l’algoritmo di ordinamento "Selection Sort";
// - stampi la matrice ordinata per righe;
// - ordini le colonne della matrice usando l’algoritmo di ordinamento "Selection Sort";
// - stampi la matrice ordinata per colonne.

#include <stdio.h>
#include <stdlib.h>

// Funzione per ordinare una riga della matrice usando Selection Sort
void selectionSortRiga(int riga[], int colonne) {
    for (int i = 0; i < colonne - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < colonne; j++) {
            if (riga[j] < riga[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = riga[i];
            riga[i] = riga[minIndex];
            riga[minIndex] = temp;
        }
    }
}

// Funzione per ordinare una colonna della matrice usando Selection Sort
void selectionSortColonna(int matrice[][100], int righe, int colonna) {
    for (int i = 0; i < righe - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < righe; j++) {
            if (matrice[j][colonna] < matrice[minIndex][colonna]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = matrice[i][colonna];
            matrice[i][colonna] = matrice[minIndex][colonna];
            matrice[minIndex][colonna] = temp;
        }
    }
}

int main() {
    int righe, colonne;

    // Input delle dimensioni della matrice
    printf("Inserire il numero di righe: ");
    scanf("%d", &righe);
    printf("Inserire il numero di colonne: ");
    scanf("%d", &colonne);

    // Dichiarazione e input della matrice
    int matrice[100][100];
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("Inserire valore Riga %d Colonna %d: ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Stampa della matrice inserita dall'utente
    printf("\nMatrice inserita:\n");
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("[%d]\t", matrice[i][j]);
        }
        printf("\n");
    }

    // Ordinamento delle righe della matrice
    for (int i = 0; i < righe; i++) {
        selectionSortRiga(matrice[i], colonne);
    }

    // Stampa della matrice ordinata per righe
    printf("\nMatrice ordinata per righe:\n");
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("[%d]\t", matrice[i][j]);
        }
        printf("\n");
    }

    // Ordinamento delle colonne della matrice
    for (int j = 0; j < colonne; j++) {
        selectionSortColonna(matrice, righe, j);
    }

    // Stampa della matrice ordinata per colonne
    printf("\nMatrice ordinata per colonne:\n");
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("[%d]\t", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
