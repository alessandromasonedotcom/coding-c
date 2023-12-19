// Traccia: Sequenza di numeri
//
// Si scriva un programma per poter analizzare una sequenza di numeri. Dati N numeri interi letti da tastiera,
// si vogliono calcolare e stampare su schermo diversi risultati:
//
// 1. Quantità di numeri positivi, nulli e negativi.
// 2. Quantità di numeri pari e dispari.
// 3. Se la sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né decrescente.
//

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per l'utilizzo della funzione system

int main() { // Corpo del programma
    int numeri_da_inserire = 0, i = 0, valore_corrente = 0, crescente = 0, decrescente = 0, positivi = 0, negativi = 0, neutri = 0, pari = 0, dispari = 0; // Dichiarazione variabili

    printf("Inserisci il numero di elementi da inserire nella sequenza: ");
    scanf("%i", &numeri_da_inserire); // Lettura del numero di elementi

    for (i = 0; i < numeri_da_inserire; i++) { // Ciclo per gestire i numeri inseriti
        int valore = 0; // Dichiarazione variabile per il valore inserito
        printf("Inserisci il numero %i: ", i + 1);
        scanf("%i", &valore); // Lettura del numero inserito

        if (i == 0) { // Primo elemento della sequenza
            valore_corrente = valore;
        } else {
            if (valore > valore_corrente) {
                crescente++;
                valore_corrente = valore;
            } else if (valore < valore_corrente) {
                decrescente++;
                valore_corrente = valore;
            } else {
                crescente++;
                decrescente++;
            }
        }

        if (valore > 0) {
            positivi++;
        } else if (valore == 0) {
            neutri++;
        } else {
            negativi++;
        }

        if (valore % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    printf("Numeri positivi: %i\nNumeri negativi: %i\nNumeri nulli: %i\nNumeri pari: %i\nNumeri dispari: %i\n", positivi, negativi, neutri, pari, dispari);

    if (decrescente == 0) {
        printf("La sequenza e' Crescente\n");
    } else if (crescente == 0) {
        printf("La sequenza e' Decrescente\n");
    } else {
        printf("La sequenza non e' ne' crescente ne' decrescente\n");
    }

    system("pause");
    return 0;
}
