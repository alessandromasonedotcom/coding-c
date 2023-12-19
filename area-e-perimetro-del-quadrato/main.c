// Traccia: Calcolo Area e Perimetro di un Quadrato in Linguaggio C
// 
// Lo scopo di questo programma è quello di calcolare l'area e il perimetro di un quadrato.
// L'utente sarà invitato a inserire la lunghezza del lato del quadrato.
// Successivamente, il programma eseguirà i calcoli necessari e mostrerà i risultati a video.

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    int lato, area, perimetro;

    // Input: richiesta della lunghezza del lato del quadrato
    printf("Inserisci il lato del quadrato: ");
    scanf("%d", &lato);

    // Calcoli: calcolo del perimetro e dell'area
    perimetro = lato * 4;   // Calcolo del perimetro del quadrato (perimetro = lato * 4)
    area = lato * lato;     // Calcolo dell'area del quadrato (area = lato * lato)

    // Output: visualizzazione del perimetro e dell'area
    printf("\nPerimetro del quadrato: %d\n", perimetro);
    printf("Area del quadrato: %d\n", area);

    return 0;  // Indica che il programma è terminato correttamente.
}
