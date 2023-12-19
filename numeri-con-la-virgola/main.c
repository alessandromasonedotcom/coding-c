// Traccia: Numeri con la virgola
//
// Scrivere un programma che legga da tastiera una sequenza di numeri decimali con due cifre dopo la virgola
// e restituisca a video la somma dei numeri positivi, la somma dei numeri negativi, il numero dei positivi,
// e il numero dei negativi. La sequenza si arresta inserendo lo 0.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("PAUSE")" per la pausa)

int main() { // Corpo del programma
    float numero = 0, somma_positivi = 0, somma_negativi = 0; // Dichiarazione variabili float per i numeri e le somme
    int positivi = 0, negativi = 0; // Dichiarazione variabili intere per i contatori

    do { // Inizio ciclo do-while
        printf("Inserire il numero: "); // Testo a video
        scanf("%f", &numero); // Input da tastiera

        if (numero > 0) { // Se il numero inserito è positivo
            positivi++; // Incremento del contatore dei numeri positivi
            somma_positivi += numero; // Aggiunta del numero alla somma dei numeri positivi
        } else if (numero < 0) { // Se il numero inserito è negativo
            negativi++; // Incremento del contatore dei numeri negativi
            somma_negativi += numero; // Aggiunta del numero alla somma dei numeri negativi
        }
    } while (numero != 0); // Fine ciclo do-while quando viene inserito lo 0

    printf("\nQuantità di numeri positivi: %i", positivi); // Stampa il numero dei numeri positivi
    printf("\nQuantità di numeri negativi: %i", negativi); // Stampa il numero dei numeri negativi
    printf("\nSomma numeri positivi: %.2f", somma_positivi); // Stampa la somma dei numeri positivi con due cifre decimali
    printf("\nSomma numeri negativi: %.2f\n", somma_negativi); // Stampa la somma dei numeri negativi con due cifre decimali

    system("PAUSE"); // Pausa il programma prima di uscire
    return 0; // Tutto OK
}
