// Traccia: Somma solo dei pari
//
// Programma che, letti da tastiera una sequenza di numeri interi, restituisce a video la somma
// e il numero dei numeri pari. La sequenza si arresta inserendo lo 0.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("PAUSE")" per la pausa)

int main() { // Corpo del programma
    int numero = 0, somma_pari = 0, numeri_pari = 0; // Dichiarazione variabili
    do { // Inizio ciclo do-while
        printf("Inserire il numero: "); // Testo a video
        scanf("%i", &numero); // Input da tastiera

        if (numero > 0 && numero % 2 == 0) { // Se il numero inserito è positivo e pari
            numeri_pari++; // Incremento del contatore dei numeri pari
            somma_pari += numero; // Aggiunta del numero alla somma dei numeri pari
        }
    } while (numero != 0); // Fine ciclo do-while quando viene inserito lo 0

    printf("\nQuantità di numeri pari: %i\n", numeri_pari); // Stampa il numero dei numeri pari
    printf("Somma dei numeri pari: %i\n", somma_pari); // Stampa la somma dei numeri pari
    system("PAUSE"); // Pausa il programma prima di uscire
    return 0; // Tutto OK
}
