// Traccia: Scrivere un programma che, letta da tastiera una stringa A di caratteri, stampa la stringa in maiuscolo,
// aggiunge alla stringa ": E' UNA BELLA FRASE", stampa la nuova frase, restituisce in output la lunghezza della stringa
// ed, infine, trasforma tutte le vocali in 'i' visualizzando il risultato.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 256

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char a[CARATTERI];
    char aggiunta[] = ": E' UNA BELLA FRASE";
    int i;

    //sezione di input
    printf("Inserisci una frase:\n>");
    fflush(stdin);
    gets(a);

    //sezione maiuscolo
    strupr(a);

    //sezine concatenamento
    strcat(a, aggiunta);

    //sezione output
    printf("Frase con prima modifica:\n>");
    puts(a);

    //sezione di output della lunghezza della stringa
    printf("Numero di caratteri:\n>%i\n", strlen(a));

    //modifica delle vocali
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ||
            a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            a[i] = 'i';
        }
    }

    //sezione di output della frase modificata
    printf("Frase con seconda modifica:\n>");
    puts(a);

    system("PAUSE");
    return 0;
}
