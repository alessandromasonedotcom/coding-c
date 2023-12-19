// Traccia: Scrivere un programma in 'c' che, letto da tastiera un array bidimensionale di interi (5 righe x 5 colonne),
// restituisce a video:
// 1) Gli elementi inseriti;
// 2) Gli elementi della diagonale principale;
// 3) Il numero di elementi pari presenti nella matrice;
// 4) Il numero di elementi dispari presenti nella matrice.

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 5
#define COLONNE 5

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    int i, j, pari = 0, dispari = 0;

    //caricamento array
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il valore\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);

            // Controlla se l'elemento è pari o dispari e aggiorna i contatori
            if (tab[i][j] % 2 == 0) {
                pari++;
            } else {
                dispari++;
            }
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

    //output diagonale
    printf(">Diagonale principale della matrice\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            if (j == i)
                printf(" %i ", tab[i][j]);
            else
                printf("   ");
        }
        printf("|");
        printf("\n");
    }

    //output numero di elementi pari e dispari
    printf(">Numero di elementi pari presenti nella matrice: %i\n", pari);
    printf(">Numero di elementi dispari presenti nella matrice: %i\n", dispari);

    //sezione conclusiva
    printf("\nPreme un tasto per chiudere");
    getch();
    return 0;
}
