// Traccia: Somma fino a 100
//
// Leggere e sommare una quantità indefinita di numeri reali finché la loro somma diventa uguale a 100.
//

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per l'utilizzo della funzione system

int main() { // Corpo del programma
    int n = 0, s = 0; // Dichiarazione variabili

    do {
        printf("Inserisci il numero: ");
        scanf("%i", &n); // Lettura del numero inserito
        s += n; // Aggiunta del numero alla somma s
    } while (s < 100); // Continua finché la somma è minore di 100

    printf("Somma: %i\n", s); // Stampa la somma a video
    system("pause"); // Pausa per visualizzare l'output
    return 0; // Tutto ok
}
