// Traccia: Scrivere un programma che, letta da tastiera una stringa di caratteri, restituisce a video una nuova stringa 
// tale che ogni vocale presente nella prima stringa sia seguita nella nuova da una 'f' se minuscola e da un 'F' se maiuscola.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 256

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char frase[CARATTERI];
    char nuova_frase[2 * CARATTERI];
    int i = 0, j = 0;

    //sezione di input
    printf("Inserisci la frase:\n>");
    fflush(stdin);
    gets(frase);

    //sezione controllo lettere e creazione della nuova stringa
    while (frase[j] != '\0') {
        if (frase[j] == 'A' || frase[j] == 'E' || frase[j] == 'I' || frase[j] == 'O' || frase[j] == 'U') {
            nuova_frase[i] = frase[j];
            nuova_frase[i + 1] = 'F';
            i += 2;
        } else if (frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') {
            nuova_frase[i] = frase[j];
            nuova_frase[i + 1] = 'f';
            i += 2;
        } else {
            nuova_frase[i] = frase[j];
            i++;
        }
        j++;
    }

    // Aggiunge il carattere terminatore alla fine della nuova stringa
    nuova_frase[i] = '\0';

    //sezione di output
    printf("Stringa modificata:\n>");
    puts(nuova_frase);

    system("PAUSE");
    return 0;
}
