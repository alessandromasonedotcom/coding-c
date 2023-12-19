#include <stdio.h>
#include <stdlib.h>

// Traccia:
// Scrivi un programma che legge da tastiera un carattere e lo restituisce a video.

int main() {
    char carattere;

    // Lettura del carattere da tastiera
    printf("Premi un tasto: ");
    carattere = getchar();

    // Visualizzazione del carattere
    printf("Hai premuto il tasto: %c\n", carattere);

    // Pulizia dello schermo e messaggio di chiusura
    printf("\n-----------------------------\n");
    printf("Premi un tasto per concludere");
    getch();

    return 0;
}
