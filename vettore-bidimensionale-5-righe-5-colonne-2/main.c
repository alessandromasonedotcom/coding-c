// Traccia: Scrivere un programma in 'c' che, letto da tastiera un array bidimensionale di caratteri (5 righe x 5 colonne),
// restituisce a video:
// 1) Gli elementi inseriti;
// 2) Gli elementi della diagonale secondaria;
// 3) Sostituire le consonanti con zero e le vocali con 1;
// 4) Scrivere a video l’array dopo le sostituzioni del punto 3.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RIGHE 5
#define COLONNE 5

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char tab[RIGHE][COLONNE];
    int i, j;
    char temp;

    //caricamento array
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il carattere\n>", i + 1, j + 1);
            fflush(stdin);
            tab[i][j] = getchar();
        }
    }

    //output array
    system("cls");
    printf(">Visualizzazione tabella\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            printf(" %c ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //output diagonale secondaria
    printf(">Diagonale secondaria della matrice\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            if (i + j == COLONNE - 1)
                printf(" %c ", tab[i][j]);
            else
                printf("   ");
        }
        printf("|");
        printf("\n");
    }

    //scambio valori
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            temp = tab[i][j];
            temp = tolower(temp);
            if (temp >= 'a' && temp <= 'z') {
                if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
                    tab[i][j] = '1';
                } else {
                    tab[i][j] = '0';
                }
            }
        }
    }

    //out con scambio valori
    printf(">Visualizzazione tabella dopo modifiche\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">|");
        for (j = 0; j < COLONNE; j++) {
            printf(" %c ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //sezione conclusiva
    printf("\nPreme un tasto per chiudere");
    getch();
    return 0;
}
