// Traccia: Somma dei primi 100 numeri pari
//
// Scrivere un programma che calcoli la somma dei primi 100 numeri pari e restituisca il risultato in output.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("PAUSE")" per la pausa)

#define NUMERI_PARI 100 // Costante che rappresenta il numero di numeri pari da sommare

int main() { // Corpo del programma
    int i = 0, somma = 0; // Dichiarazione variabili per il contatore e la somma

    for (i = 0; i <= NUMERI_PARI * 2; i += 2) { // Ciclo for per sommare i primi 100 numeri pari (incremento di 2 per ottenere solo i numeri pari)
        somma += i; // Aggiunta del numero pari alla somma totale
    }

    printf("La somma dei primi %i numeri pari e': %i\n", NUMERI_PARI, somma); // Stampa il risultato della somma
    system("PAUSE"); // Pausa il programma prima di uscire
    return 0; // Tutto OK
}
