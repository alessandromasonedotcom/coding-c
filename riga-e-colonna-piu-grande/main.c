// Traccia: Scrivere un programma in 'c' che, letto da tastiera un array bidimensionale di interi (6 righe x 6 colonne),
// restituisce a video la riga e la colonna con la somma più grande.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RIGHE 6
#define COLONNE 6

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    int i, j;
    int riga, colonna, somma_riga = 0, massimo_riga, somma_colonna = 0, massimo_colonna;

    //caricamento array
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il Numero\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);
        }
    }

    //somma righe
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            somma_riga += tab[i][j];
        }
        if (i == 0) {
            massimo_riga = somma_riga;
            riga = i;
        } else if (somma_riga > massimo_riga) {
            massimo_riga = somma_riga;
            riga = i;
        }
        somma_riga = 0;
    }

    //somma colonne
    for (j = 0; j < COLONNE; j++) {
        for (i = 0; i < RIGHE; i++) {
            somma_colonna += tab[i][j];
        }
        if (j == 0) {
            massimo_colonna = somma_colonna;
            colonna = j;
        } else if (somma_colonna > massimo_colonna) {
            massimo_colonna = somma_colonna;
            colonna = j;
        }
        somma_colonna = 0;
    }

    //output risultati
    system("cls");
    printf("La riga con la somma maggiore e' %i con un risultato pari a %i unita'\n", riga + 1, massimo_riga);
    printf("La colonna con la somma maggiore e' %i con un risultato pari a %i unita'\n", colonna + 1, massimo_colonna);

    //sezione conclusiva
    printf("\nPreme un tasto per chiudere");
    getch();
    return 0;
}
