// Traccia: 1000 Numeri da tastiera
//
// Scrivere un programma in C, che legga da tastiera 1000 numeri interi e restituisca a video:
// - Il numero dei numeri pari
// - Il numero dei numeri dispari
// - La somma dei numeri pari
// - La somma dei numeri dispari
// - La media dei numeri pari
// - La media dei numeri dispari

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("PAUSE")" per la pausa)

#define NUMERI 1000 // Costante che rappresenta il numero di numeri da inserire

int main() { // Corpo del programma
    int numero = 0, q_pari = 0, q_dispari = 0, somma_pari = 0, somma_dispari = 0, i = 0; // Dichiarazione variabili
    float media_pari = 0, media_dispari = 0; // Dichiarazione variabili

    for (i = 0; i < NUMERI; i++) { // Ciclo for per leggere 1000 numeri
        printf("Inserisci il valore: "); // Testo a video
        scanf("%i", &numero); // Input

        if (numero % 2 == 0) { // Condizione per numeri pari
            q_pari++; // Incremento contatore numeri pari
            somma_pari += numero; // Aggiunta del numero pari alla somma totale dei pari
        } else { // Condizione per numeri dispari
            q_dispari++; // Incremento contatore numeri dispari
            somma_dispari += numero; // Aggiunta del numero dispari alla somma totale dei dispari
        }
    }

    media_pari = (float)somma_pari / q_pari; // Calcolo della media dei numeri pari
    media_dispari = (float)somma_dispari / q_dispari; // Calcolo della media dei numeri dispari

    printf("Quantita' numeri pari: %i\n", q_pari); // Stampa il numero dei numeri pari
    printf("Somma dei numeri pari: %i\n", somma_pari); // Stampa la somma dei numeri pari
    printf("Media dei numeri pari: %.2f\n", media_pari); // Stampa la media dei numeri pari
    printf("Quantita' numeri dispari: %i\n", q_dispari); // Stampa il numero dei numeri dispari
    printf("Somma dei numeri dispari: %i\n", somma_dispari); // Stampa la somma dei numeri dispari
    printf("Media dei numeri dispari: %.2f\n", media_dispari); // Stampa la media dei numeri dispari

    system("PAUSE"); // Pausa il programma prima di uscire
    return 0; // Tutto OK
}
