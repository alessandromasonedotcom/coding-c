// Traccia: Primo vettore Bidimensionale
// Scrivere un programma che, letto da tastiera un array bidimensionale (3 righe e 3 colonne),
// restituisce a video i valori in esso contenuti.

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 3
#define COLONNE 3

int main() {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    
    //caricamento array
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            system("cls");
            printf("Riga %i Colonna %i\nInserire il valore\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);
        }
        printf("\n");
    }
    
    //output array
    system("cls");
    printf("Visualizzazione tabella\n");
    for (int i = 0; i < RIGHE; i++) {
        printf(">");
        for (int j = 0; j < COLONNE; j++) {
            printf("[%i]", tab[i][j]);
        }
        printf("\n");
    }
    
    //sezione conclusiva
    printf("\nPreme un tasto per chiudere");
    getch();
    return 0;
}
