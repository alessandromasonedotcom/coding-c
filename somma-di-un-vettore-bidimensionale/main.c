// Traccia: Somma di un vettore bidimensionale
// Scrivere un programma che, letto da tastiera un array bidimensionale (3 righe e 3 colonne),
// restituisce a video i valori in esso contenuti e calcola la somma di questi ultimi.

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 3
#define COLONNE 3

int main() {
    //sezione dichiarativa
    int tab[RIGHE][COLONNE];
    int i, j;
    int somma = 0;
    
    //caricamento array
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            system("Cls");
            printf("Riga %i Colonna %i\nInserire il valore\n>", i + 1, j + 1);
            scanf("%i", &tab[i][j]);
        }
        printf("\n");
    }
    
    //calcolo somma
    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++) {
            somma = tab[i][j] + somma;
        }
    }
    
    //output array
    system("cls");
    printf("Visualizzazione tabella\n");
    for (i = 0; i < RIGHE; i++) {
        printf(">");
        for (j = 0; j < COLONNE; j++) {
            printf("[%i]", tab[i][j]);
        }
        printf("\n");
    }
    
    //output somma
    printf("Somma: %i", somma);
    
    //sezione conclusiva
    printf("\nPreme un tasto per chiudere");
    getch();
    return 0;
}
