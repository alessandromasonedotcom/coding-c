// Traccia: Somma di Due Numeri se Sono Compresi tra 1 e 5

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione delle variabili
    float a, b, c;

    // Input: richiesta dei numeri a e b
    printf("Inserisci il primo numero (a): ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero (b): ");
    scanf("%f", &b);

    // Verifica se entrambi i numeri sono compresi tra 1 e 5
    if (a > 1 && a < 5 && b > 1 && b < 5) {
        // Calcolo della somma
        c = a + b;
        // Output: visualizzazione della somma
        printf("La somma di %.3f e %.3f e': %.3f\n", a, b, c);
    } else {
        // Output: visualizzazione del messaggio di condizione non verificata
        printf("Condizione non verificata: entrambi i numeri devono essere compresi tra 1 e 5.\n");
    }

    return 0; // Indica che il programma è terminato correttamente.
}
