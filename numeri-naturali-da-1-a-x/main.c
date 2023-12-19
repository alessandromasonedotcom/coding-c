// Traccia: Numeri Naturali da 1 a X - Stampare una Sequenza di Numeri

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i;

    // Lettura del numero X da tastiera e controllo sulla validità dell'input
    do {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &x);
    } while (x < 1);

    system("cls"); // Pulire l'input

    // Stampa a video dei numeri naturali da 1 a X inclusi
    printf("Numeri naturali da 1 a %d:\n", x);
    for (i = 1; i <= x; i++) {
        printf("%d\n", i);
    }

    system("pause");
    return 0;
}
