// Traccia: Scrivere un programma che riceva da tastiera una stringa di caratteri e ritorni 0 se contiene almeno una vocale maiuscola.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 10000+1

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char frase[CARATTERI];
    int i = 0;
    int ritorno = 1;

    //sezione di in-put
    printf("Inserisci la stringa incriminata:\n>");
    fgets(frase, sizeof(frase), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    //controllo se è presente una vocale maiusola
    while (ritorno != 0 && frase[i] != '\0') {
        if (frase[i] >= 'A' && frase[i] <= 'Z' && (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')) {
            ritorno = 0;
        }
        i++;
    }

    //sezione di output
    printf("Return %i\n", ritorno);

    //sezione conclusiva
    printf("Premi un tasto per uscire\n>");
    getch();
    return 0;
}
