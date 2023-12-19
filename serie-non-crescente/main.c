// Traccia: Serie non crescente
//
// Leggere una serie di numeri interi passati dall’utente, fermandosi al primo numero che rende la serie non crescente
// e restituendo quanti numeri erano stati inseriti.
//
// Si richiede un numero da tastiera e se il conteggio è pari a 0 lo si associa a un numero base e si incrementa di 1 il conteggio,
// se invece il conteggio è diverso da 0, se il numero base è minore del numero inserito il numero di base diventa il numero inserito
// e si incrementa il conteggio di 1, altrimenti si mostra il conteggio e si assegna 0 al conteggio.
// Ripetere il tutto fin quando il conteggio non è 0.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per il sistema operativo (utilizzata per "system("cls")" per la pulizia dello schermo)

int main() { // Corpo del programma
    int numero_inserito = 0, numero_base = 0, conteggio = 0; // Dichiarazione variabili
    printf("Inserire una serie di numeri, il programma si fermerà al primo numero che interrompe la serie crescente.\n"); // Testo a video
    sleep(4); // Attesa di 4 secondi

    do { // Inizio ciclo do-while
        system("cls"); // Cancellazione messaggi precedenti
        printf("Inserire il %i° numero: ", conteggio + 1); // Testo a video
        scanf("%i", &numero_inserito); // Input da tastiera

        if (conteggio == 0) { // Se il conteggio è 0
            numero_base = numero_inserito; // Assegnazione
            conteggio++; // Incremento di 1 al conteggio
        } else if (numero_base <= numero_inserito) { // Se il numero inserito è maggiore o uguale al numero base
            numero_base = numero_inserito; // Assegnazione
            conteggio++; // Incremento di 1 al conteggio
        } else { // Altrimenti (la serie non è crescente)
            system("cls"); // Cancellazione messaggi precedenti
            printf("Numeri totali inseriti: %i\n", conteggio); // Messaggio a video
            conteggio = 0; // Assegnazione di 0 al conteggio per ripartire con una nuova serie
        }
    } while (conteggio != 0); // Fine ciclo do-while

    system("PAUSE"); // Premi un tasto per continuare
    return 0; // Tutto OK
}
