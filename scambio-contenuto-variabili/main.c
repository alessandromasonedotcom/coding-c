// Traccia: Scambio Contenuto Variabili in Linguaggio C
//
// Lo scopo di questo programma è quello di acquisire due numeri interi da tastiera,
// scambiare il loro contenuto utilizzando una variabile temporanea e visualizzare i valori delle variabili dopo lo scambio.

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    int numero_1, numero_2, x;

    // Input: richiesta del primo numero
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero_1);

    // Input: richiesta del secondo numero
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero_2);

    // Scambio dei valori tra le variabili utilizzando una variabile temporanea
    x = numero_1;
    numero_1 = numero_2;
    numero_2 = x;

    // Output: visualizzazione del contenuto delle variabili dopo lo scambio
    printf("Contenuto variabile numero_1: %d\n", numero_1);
    printf("Contenuto variabile numero_2: %d\n", numero_2);

    return 0;  // Indica che il programma è terminato correttamente.
}
