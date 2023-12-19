// Traccia:
// Dopo aver caricato in memoria un vettore di interi con dimensione d (con d inserito da tastiera),
// inserire “in coda” ed in “testa” al vettore un nuovo elemento.
// Scrivere il vettore iniziale e il vettore modificato.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char s[100];
    int n;
    int i;

    // Sezione di input
    printf("Inserisci una frase:\n");
    fgets(s, sizeof(s), stdin);

    // Rimuovi il carattere di newline "\n" dalla stringa letta con fgets
    s[strcspn(s, "\n")] = '\0';

    // Input dell'indice 'n' con controllo di validità
    do {
        printf("Inserire un numero minore o uguale alla lunghezza della frase e maggiore di 0: ");
        scanf("%i", &n);
    } while (n > strlen(s) || n <= 0);

    // Sezione output
    system("cls");
    printf("Lettere fino alla %d\370 lettera:\n", n);
    for (i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    // Chiusura programma
    printf("Clicca un tasto per continuare . . .");
    getch();
    return 0;
}
