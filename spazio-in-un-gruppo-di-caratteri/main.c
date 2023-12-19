// Traccia: Scrivi un programma che acquisisca da tastiera una stringa di caratteri 
// e determini se all'interno della frase è presente almeno un segno di separazione (spazio).
// Se la frase contiene uno spazio, il programma dovrà restituire 1;
// altrimenti, se non è presente alcuno spazio, restituirà 0.
//
// Il programma dovrà inoltre essere in grado di gestire frasi di lunghezza massima di 10.000 caratteri.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contieneSpazio(const char* frase) {
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            return 1; // Se trova uno spazio, ritorna 1
        }
    }
    return 0; // Altrimenti ritorna 0
}

int main() {
    //sezione dichiarativa
    char frase[10001];

    //sezione di in-put
    printf("Inserisci la frase:\n>");
    fgets(frase, sizeof(frase), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    //sezione di controllo e out-put
    int risultato = contieneSpazio(frase);
    printf("Il risultato è: %d\n", risultato);

    return 0;
}
