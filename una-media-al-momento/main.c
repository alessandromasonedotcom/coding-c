// Traccia: Una media al momento
//
// Scrivere un programma che legga da tastiera una sequenza di lunghezza ignota a priori di numeri interi positivi.
// Il programma, a partire dal primo numero introdotto, stampa ogni volta la media di tutti i numeri introdotti.
// Terminare quando il numero inserito è negativo.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("PAUSE")" per la pausa)

int main() { // Corpo del programma
    int i = 0, somma = 0, numero = 0; // Dichiarazione variabili per il contatore, la somma e il numero
    float media = 0; // Dichiarazione variabile per la media (utilizzo il tipo float per gestire i decimali)

    do { // Inizio ciclo do-while
        printf("Inserire il numero: "); // Testo a video
        scanf("%i", &numero); // Input da tastiera

        if (numero > 0) { // Se il numero inserito è positivo
            i++; // Incremento del contatore dei numeri
            somma += numero; // Aggiunta del numero alla somma totale
            media = (float)somma / i; // Calcolo della media finora
            printf("La media al momento e': %.2f\n", media); // Stampa la media calcolata finora con due cifre decimali
        }
    } while (numero >= 0); // Fine ciclo do-while quando viene inserito un numero negativo

    system("PAUSE"); // Pausa il programma prima di uscire
    return 0; // Tutto OK
}
