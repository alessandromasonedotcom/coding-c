// Traccia: Scrivere un programma in 'c' che, letto da tastiera un array bidimensionale di caratteri (3 righe x 3 colonne),
// restituisce a video gli elementi inseriti e sostituisce la prima riga con la terza, stampando a video nuovamente la matrice.

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 3
#define COLONNE 3

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    int i, j, temp;

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

    //switch righe
    for (j = 0; j < COLONNE; j++) {
        temp = tab[0][j];
        tab[0][j] = tab[2][j];
        tab[2][j] = temp;
    }

    //output array dopo modifiche
    printf(">Visualizzazione tabella dopo modifiche\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            printf(" %i ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
