// Traccia: Scrivi un programma in linguaggio C che chiede all'utente di inserire due numeri interi positivi, a e b, da tastiera. Il programma dovrà quindi calcolare la somma di tutti i numeri interi compresi tra a e b (inclusi) e stampare il risultato.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per l'utilizzo della funzione system

int main() { // Corpo del programma
    int a = 0, b = 0, i = 0, sum = 0; // Dichiarazione delle variabili

    printf("Inserire il primo valore (a): "); // Richiesta del primo valore
    scanf("%i", &a); // Lettura del primo valore

    printf("Inserire il secondo valore (b): "); // Richiesta del secondo valore
    scanf("%i", &b); // Lettura del secondo valore

    if (a > b) { // Se il primo valore è maggiore del secondo, scambiarli
        int temp = a;
        a = b;
        b = temp;
    }

    // Calcolo della somma dei numeri compresi tra a e b
    for (i = a; i <= b; i++) {
        sum += i;
    }

    printf("La somma dei numeri compresi tra %i e %i è: %i\n", a, b, sum); // Stampa a video il risultato

    system("pause"); // Pausa per visualizzare l'output
    return 0; // Indica che il programma è terminato con successo
}
