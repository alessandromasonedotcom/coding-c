// Traccia: Pari, Dispari o Nullo - Conteggio dei Numeri

#include <stdio.h>
#include <stdlib.h> 

#define NUMERI_TOTALI 10

int main() {
    // Dichiarazione delle variabili
    int positivi = 0, nulli = 0, negativi = 0;
    float numero;

    // Ciclo per leggere 10 numeri e determinare quanti sono positivi, nulli e negativi
    for (int i = 1; i <= NUMERI_TOTALI; i++) {
        printf("Inserisci il numero %d: ", i);
        scanf("%f", &numero);

        if (numero > 0) {
            positivi++;
        } else if (numero == 0) {
            nulli++;
        } else {
            negativi++;
        }
    }

    // Visualizzazione a video del conteggio dei numeri positivi, nulli e negativi
    printf("Numeri positivi: %d\n", positivi);
    printf("Numeri nulli: %d\n", nulli);
    printf("Numeri negativi: %d\n", negativi);

    system("pause");
    return 0;
}
