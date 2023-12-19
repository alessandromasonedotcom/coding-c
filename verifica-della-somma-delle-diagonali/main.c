// Traccia: Scrivere un programma in 'c' che, dopo aver caricato una matrice 9x9 di interi da tastiera,
// verifichi se la somma delle celle delle due diagonali (principale e secondaria) è uguale.

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 9
#define COLONNE 9

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    int i, j, somma_diagonale_1 = 0, somma_diagonale_2 = 0;

    //caricamento array
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il valore\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);
        }
        printf("\n");
    }

    //output array
    system("cls");
    printf(">Visualizzazione tabella\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            printf(" %i ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //calcolo somma prima diagonale (principale)
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            if (i == j)
                somma_diagonale_1 += tab[i][j];
        }
    }

    //calcolo somma seconda diagonale (secondaria)
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            if (i + j == COLONNE - 1)
                somma_diagonale_2 += tab[i][j];
        }
    }

    //verifica se le due somme sono uguali
    if (somma_diagonale_1 == somma_diagonale_2)
        printf("\nLa somma delle due diagonali e' uguale\n");
    else
        printf("\nLa somma delle due diagonali non e' uguale\n");

    system("PAUSE");
    return 0;
}
