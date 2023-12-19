// Traccia:
// Scrivere un programma che legge da tastiera un array di numeri reali diversi da 0.
// La lettura termina quando la somma dei numeri è maggiore di 50 e comunque non si possono immettere più di 100 numeri.
// Stampare in output la somma dei numeri dispari.

#include <stdio.h>
#include <stdlib.h>

#define NUMERI 100
#define SOMMA 50

int main() {
    float numero[NUMERI];
    int i = 0;
    float somma = 0, somma_dispari = 0;

    printf("Inserisci numeri reali diversi da 0.\n");
    printf("La lettura termina quando la somma dei numeri e' maggiore di 50 o comunque non si possono immettere piu' di 100 numeri.\n");

    do {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%f", &numero[i]);

        if (numero[i] != 0) {
            somma += numero[i];
            if ((int)numero[i] % 2 != 0) { // Utilizziamo il casting a int per verificare se il numero è dispari
                somma_dispari += numero[i];
            }
            i++;
        }
    } while (i < NUMERI && somma <= SOMMA);

    printf("Somma dei numeri dispari inseriti finora: %.2f\n", somma_dispari);
    return 0;
}
