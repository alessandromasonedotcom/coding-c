// Traccia: Scrivi un programma che legga da tastiera una stringa di caratteri e un carattere specifico.
// Il programma dovrà quindi contare quante volte il carattere specifico compare all'interno della stringa
// e restituire il risultato.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaCarattere(const char* frase, char carattere) {
    int n_volte = 0;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == carattere) {
            n_volte++;
        }
    }
    return n_volte;
}

int main() {
    //sezione dichiarativa
    char frase[10001];
    char carattere;

    //sezione di in-put
    printf("Inserisci la frase:\n>");
    fgets(frase, sizeof(frase), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    printf("Inserisci il carattere da esaminare:\n>");
    scanf(" %c", &carattere); // Inserire lo spazio prima del %c per consumare eventuali spazi residui

    //sezione di controllo e out-put
    int risultato = contaCarattere(frase, carattere);
    printf("Il carattere '%c' è presente %d volte nella frase.\n", carattere, risultato);

    return 0;
}
