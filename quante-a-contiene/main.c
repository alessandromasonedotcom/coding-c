// Traccia:
// Assegnata una stringa S, scrivere un programma che conteggi i caratteri ‘A’ in essa contenuti.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char s[100];
    int countA = 0;
    int i;

    // Input
    printf("Inserisci una frase:\n");
    fgets(s, sizeof(s), stdin);

    // Rimuovi il carattere di newline "\n" dalla stringa letta con fgets
    s[strcspn(s, "\n")] = '\0';

    // Sezione controllo per le 'a' o 'A'
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            countA++;
        }
    }

    // Output
    system("cls");
    printf("Numero di 'a' o 'A': %i\n", countA);

    // Chiusura programma
    printf("Clicca un tasto per continuare . . .");
    getch();
    return 0;
}
