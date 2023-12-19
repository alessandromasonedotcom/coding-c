// Traccia: Scrivi un programma in linguaggio C che chiede all'utente di inserire due numeri interi, a e b, da tastiera. Il programma dovrà quindi stampare a video tutti i numeri pari compresi tra a e b (inclusi) e comunicare quanti sono.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per l'utilizzo della funzione system

int main() { // Corpo del programma
    int n_inizio = 0, n_fine = 0, i = 0, conta = 0; // Dichiarazione delle variabili

    printf("Inserire primo valore: "); // Richiesta del primo valore
    scanf("%i", &n_inizio); // Lettura del primo valore

    printf("Inserire secondo valore: "); // Richiesta del secondo valore
    scanf("%i", &n_fine); // Lettura del secondo valore

    system("cls"); // Pulizia della shell

    printf("I numeri pari compresi tra %i e %i sono: ", n_inizio, n_fine); // Stampa a video del messaggio

    // Ciclo per stampare i numeri pari compresi tra n_inizio e n_fine
    for (i = n_inizio; i <= n_fine; i++) {
        if (i % 2 == 0) { // Se il numero è pari
            printf("%i", i); // Stampa a video il numero
            conta++; // Incremento del contatore
            if (i != n_fine) { // Se non è l'ultimo numero
                printf(", "); // Stampa una virgola e uno spazio per separare i numeri
            }
        }
    }

    printf(" (Totale: %i)\n", conta); // Stampa il totale dei numeri pari trovati

    system("pause"); // Pausa per visualizzare l'output
    return 0; // Indica che il programma è terminato con successo
}
