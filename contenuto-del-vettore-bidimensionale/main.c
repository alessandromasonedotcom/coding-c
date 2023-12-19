// Traccia: Scrivere un programma in 'c' che, dopo aver caricato un array bidimensionale di interi
// con dimensioni fornite dall'utente, acquisisca un numero intero fornito anch'esso dall'utente
// e ponga a zero le celle delle righe la cui somma è maggiore del numero dato. Successivamente,
// il programma stampa a video la matrice modificata.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    int i, j, somma_riga;
    int colonne, righe, numero;
    printf("Inserisci il numero di colonne\n>");
    scanf("%i", &colonne);
    printf("Inserisci il numero di righe\n>");
    scanf("%i", &righe);
    printf("Inserire il numero\n>");
    scanf("%i", &numero);
    int tab[righe][colonne];

    //caricamento array
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il valore\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);
        }
        printf("\n");
    }

    //output array
    system("cls");
    printf(">Visualizzazione tabella\n");
    for (i = 0; i < righe; i++) {
        printf(">|");
        for (j = 0; j < colonne; j++) {
            printf(" %i ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    //somma righe e sostituzione con zero
    for (i = 0; i < righe; i++) {
        somma_riga = 0;
        for (j = 0; j < colonne; j++) {
            somma_riga += tab[i][j];
        }
        if (somma_riga > numero) {
            for (j = 0; j < colonne; j++) {
                tab[i][j] = 0;
            }
        }
    }

    //output array dopo modifiche
    printf(">Visualizzazione tabella dopo modifiche\n");
    for (i = 0; i < righe; i++) {
        printf(">|");
        for (j = 0; j < colonne; j++) {
            printf(" %i ", tab[i][j]);
        }
        printf("|");
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
