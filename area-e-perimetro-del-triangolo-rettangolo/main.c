// Traccia: Calcolo dell'Area e del Perimetro del Triangolo Rettangolo in Linguaggio C
//
// Lo scopo di questo programma è quello di calcolare l'area e il perimetro di un triangolo rettangolo,
// ricevendo in input i valori dell'ipotenusa e dei due cateti.

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    float cateto_1, cateto_2, ipotenusa, perimetro, area;

    // Input: richiesta del primo cateto
    printf("Inserisci il primo cateto: ");
    scanf("%f", &cateto_1);

    // Input: richiesta del secondo cateto
    printf("Inserisci il secondo cateto: ");
    scanf("%f", &cateto_2);

    // Input: richiesta dell'ipotenusa
    printf("Inserisci l'ipotenusa: ");
    scanf("%f", &ipotenusa);

    // Calcolo del perimetro e dell'area
    perimetro = cateto_1 + cateto_2 + ipotenusa;
    area = (cateto_1 * cateto_2) / 2;

    // Output: visualizzazione dei risultati dell'area e del perimetro
    printf("Area del triangolo: %f\n", area);
    printf("Perimetro del triangolo: %f\n", perimetro);

    return 0;  // Indica che il programma è terminato correttamente.
}
