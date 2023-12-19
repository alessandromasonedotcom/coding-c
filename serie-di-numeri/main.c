// Traccia: Serie di numeri
//
// Inserire una serie di numeri interi e sommarli. Interrompere l’immissione al sesto valore pari
// e visualizzare quindi in output la somma ottenuta.
//

#include <stdio.h> // Libreria per l'input e l'output standard

int main() { // Corpo del programma
    int n = 0, s = 0, numeri_pari_inseriti = 0; // Dichiarazione variabili

    do {
        printf("Inserisci un numero: ");
        scanf("%i", &n); // Lettura del numero inserito

        if (n % 2 == 0) {
            numeri_pari_inseriti++; // Incremento del contatore dei numeri pari
        }

        s += n; // Somma il numero alla variabile s
    } while (numeri_pari_inseriti < 6); // Continua finché non sono stati inseriti 6 numeri pari

    printf("Somma: %i\n", s); // Stampa la somma a video
    return 0; // Tutto ok
}
