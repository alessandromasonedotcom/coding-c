// Traccia:
// Si scriva un programma per calcolare il valore massimo e minimo di un insieme di N numeri inseriti da tastiera.
// Il programma deve leggere il valore di N, ed in seguito deve leggere una sequenza di N numeri.
// A questo punto il programma deve stampare il massimo ed il minimo tra i numeri inseriti.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeri_da_inserire = 0, numero = 0;
    int numero_minore, numero_maggiore;

    printf("Inserire la quantita' di numeri da analizzare: ");
    scanf("%i", &numeri_da_inserire);

    for (int i = 0; i < numeri_da_inserire; i++) {
        printf("Inserire il %i\370 numero: ", i + 1);
        scanf("%i", &numero);

        if (i == 0) {
            numero_minore = numero;
            numero_maggiore = numero;
        } else {
            if (numero < numero_minore) {
                numero_minore = numero;
            }
            if (numero > numero_maggiore) {
                numero_maggiore = numero;
            }
        }
    }

    printf("\nIl minore e': %i\nIl maggiore e': %i\n", numero_minore, numero_maggiore);
    return 0;
}
