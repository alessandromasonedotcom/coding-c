// Traccia: Calcolo dell'Area del Trapezio in Linguaggio C
//
// Lo scopo di questo programma è quello di calcolare l'area del trapezio acquisendo i valori delle due basi e dell'altezza da tastiera.

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    float base_minore, base_maggiore, altezza, area;

    // Input: richiesta della base minore
    printf("Inserisci la base minore: ");
    scanf("%f", &base_minore);

    // Input: richiesta della base maggiore
    printf("Inserisci la base maggiore: ");
    scanf("%f", &base_maggiore);

    // Input: richiesta dell'altezza
    printf("Inserisci l'altezza: ");
    scanf("%f", &altezza);

    // Calcolo dell'area del trapezio
    area = ((base_minore + base_maggiore) * altezza) / 2;

    // Output: visualizzazione del risultato dell'area del trapezio
    printf("Area del trapezio: %f\n", area);

    return 0;  // Indica che il programma è terminato correttamente.
}
