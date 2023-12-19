// Scrivere un programma che letti da tastiera dieci elementi di un array di tipo intero dal nome topolino,
// stampa a video gli elementi stessi

#include <stdio.h> //libreria per l'input/output standard

#define NUMERI 10 //costante che rappresenta la dimensione dell'array

int main() {
    int topolino[NUMERI]; //dichiarazione dell'array topolino di dimensione NUMERI
    int i; //dichiarazione di una variabile di controllo per il ciclo

    // Ciclo for per leggere gli elementi dell'array da tastiera
    for (i = 0; i < NUMERI; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &topolino[i]);
    }

    // Stampa a video degli elementi dell'array
    printf("\n----------------------------------\nInterno del vettore topolino:\n----------------------------------\n");
    for (i = 0; i < NUMERI; i++) {
        printf("Elemento %d: %d\n", i + 1, topolino[i]);
    }

    return 0;
}
