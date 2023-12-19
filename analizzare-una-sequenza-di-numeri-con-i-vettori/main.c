// Traccia:
// Si scriva un programma per poter analizzare una sequenza di numeri.
// Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi risultati:
// - Quanti sono i numeri positivi, nulli e negativi
// - Quanti sono i numeri pari e dispari
// - La sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né decrescente.

#include <stdio.h>
#include <stdlib.h>

void banner(int numeri_da_inserire) {
    printf("-------------------------------\nAnalisi sequenza di %i numeri\n-------------------------------\n", numeri_da_inserire);
}

int main() {
    int numeri_da_inserire = 0;
    int positivi = 0, negativi = 0, neutri = 0;
    int pari = 0, dispari = 0;
    int sequenza_crescente = 1, sequenza_decrescente = 1;
    int numero_precedente, numero_attuale;

    printf("Inserire la quantita' di numeri da analizzare: ");
    scanf("%i", &numeri_da_inserire);

    printf("\n");

    for (int i = 0; i < numeri_da_inserire; i++) {
        printf("Inserire il %i\370 numero: ", i + 1);
        scanf("%i", &numero_attuale);

        if (numero_attuale > 0)
            positivi++;
        else if (numero_attuale < 0)
            negativi++;
        else
            neutri++;

        if (numero_attuale % 2 == 0)
            pari++;
        else
            dispari++;

        if (i > 0) {
            if (numero_attuale > numero_precedente)
                sequenza_decrescente = 0;
            else if (numero_attuale < numero_precedente)
                sequenza_crescente = 0;
        }

        numero_precedente = numero_attuale;
    }

    system("cls"); // Pulire il terminale
    banner(numeri_da_inserire); // Richiamo funzione

    printf("Positivi: %i\nNegativi: %i\nNeutri: %i\nPari: %i\nDispari: %i\n", positivi, negativi, neutri, pari, dispari);

    if (sequenza_crescente == 1 && sequenza_decrescente == 0)
        printf("La sequenza e' crescente.\n");
    else if (sequenza_crescente == 0 && sequenza_decrescente == 1)
        printf("La sequenza e' decrescente.\n");
    else
        printf("La sequenza non e' né crescente né decrescente.\n");

    return 0;
}
