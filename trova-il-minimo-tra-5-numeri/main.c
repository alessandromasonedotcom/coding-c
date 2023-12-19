// Traccia: Trova il Valore Minimo tra 5 Numeri

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    float numero, minimo;

    // Richiesta del primo numero e inizializzazione del minimo
    printf("Inserisci il numero 1: ");
    scanf("%f", &minimo);

    // Ciclo per leggere gli altri 4 numeri e trovare il minimo
    for (int i = 2; i <= 5; i++) {
        printf("Inserisci il numero %d: ", i);
        scanf("%f", &numero);

        // Verifica se il numero letto è più piccolo del valore minimo attuale
        if (numero < minimo) {
            minimo = numero;
        }
    }

    // Visualizzazione a video del valore minimo
    printf("Il valore minimo tra i numeri inseriti è: %f\n", minimo);

    system("pause");
    return 0;
}
