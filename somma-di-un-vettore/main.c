// Traccia:
// Scrivere un programma che legga da tastiera un array di 15 elementi e restituisca a video gli elementi stessi e la loro somma.

#include <stdio.h> //libreria per l'input/output standard
#include <stdlib.h> //libreria per il system("cls")

#define NUMERI 15 //costante che rappresenta la dimensione dell'array

int main() {
    int topolino[NUMERI]; //dichiarazione dell'array topolino di dimensione NUMERI
    int i, somma = 0; //dichiarazione delle variabili di controllo per il ciclo e della somma

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &topolino[i]);
    }

    // Pulisce la console
    system("cls");

    // Stampa a video degli elementi dell'array
    printf("-----------------------------\nInterno del vettore topolino:\n-----------------------------\n");
    for (i = 0; i < NUMERI; i++) {
        printf("Elemento %d: %d\n", i + 1, topolino[i]);
    }

    // Calcola la somma degli elementi dell'array
    for (i = 0; i < NUMERI; i++) {
        somma += topolino[i];
    }

    // Stampa a video la somma degli elementi dell'array
    printf("\nSomma di tutti gli elementi: %d\n", somma);

    return 0;
}
