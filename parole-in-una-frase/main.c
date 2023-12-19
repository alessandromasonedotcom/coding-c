// Traccia:
// Inserire una stringa da tastiera. Visualizzare il numero delle parole di cui è composta.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char frase[10000];
    int parole = 0;
    int i;

    // Sezione di input
    printf("Inserisci la tua frase:\n");
    fgets(frase, sizeof(frase), stdin);

    // Rimuovi il carattere di newline "\n" dalla stringa letta con fgets
    frase[strcspn(frase, "\n")] = '\0';

    // Sezione di calcolo delle parole attraverso gli spazi
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ' && (frase[i + 1] == ' ' || frase[i + 1] == '\0')) {
            parole++;
        }
    }

    // Sezione di output
    system("cls");
    printf("Nella frase scritta ci sono %i parole.\n", parole);

    // Sezione di chiusura
    printf("Premi un tasto per continuare . . .");
    getch();
    return 0;
}
