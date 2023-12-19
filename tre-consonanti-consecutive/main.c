// Traccia: Scrivere un programma che riceva da tastiera una stringa di caratteri e ritorni '0' se contiene almeno tre consonanti consecutive.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 10000+1

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char frase[CARATTERI];
    int i = 0;
    int ritorno = 1;
    int consonante = 0;

    //sezione di in-put
    printf("Inserisci la stringa incriminata:\n>");
    fgets(frase, sizeof(frase), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    // Converti la stringa in minuscolo per semplificare il controllo delle consonanti
    for (i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);
    }

    // Controllo se è presente una sequenza di tre consonanti consecutive
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= 'b' && frase[i] <= 'z' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u') {
            consonante++;
            if (consonante >= 3) {
                ritorno = 0;
                break;
            }
        } else {
            consonante = 0;
        }
    }

    //sezione di out-put
    printf("Return %i\n", ritorno);

    //sezione conclusiva
    printf("Premi un tasto per uscire\n>");
    getch();
    return 0;
}
