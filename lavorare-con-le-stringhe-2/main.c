// Traccia:
// Scrivi un programma che legga da tastiera due stringhe e restituisca a video:
// 1. La stampa delle due stringhe;
// 2. La lunghezza di ciascuna stringa;
// 3. La stampa delle stringhe concatenate;
// 4. Esegue il confronto tra le due stringhe e restituisce 1 se sono uguali, 0 se sono diverse.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char frase1[100];
    char frase2[100];
    int lunghezza_frase1, lunghezza_frase2;
    int confronto;

    // Input
    printf("Inserisci la prima frase [max 100 caratteri]: ");
    fgets(frase1, sizeof(frase1), stdin);
    printf("Inserisci la seconda frase [max 100 caratteri]: ");
    fgets(frase2, sizeof(frase2), stdin);

    // Rimuovi il carattere di newline "\n" dalle stringhe lette con fgets
    frase1[strcspn(frase1, "\n")] = '\0';
    frase2[strcspn(frase2, "\n")] = '\0';

    // Controllo lunghezza
    lunghezza_frase1 = strlen(frase1);
    lunghezza_frase2 = strlen(frase2);

    // Confronto delle stringhe
    confronto = strcmp(frase1, frase2);

    // Output
    system("cls");
    printf("Analisi:\n");
    printf("Prima stringa:\t\t\t%s\n", frase1);
    printf("Seconda stringa:\t\t%s\n", frase2);
    printf("Lunghezza prima stringa:\t%d\n", lunghezza_frase1);
    printf("Lunghezza seconda stringa:\t%d\n", lunghezza_frase2);

    // Concatenamento stringhe e stampa delle stringhe concatenate
    strcat(frase1, frase2);
    printf("Frasi concatenate:\t\t%s\n", frase1);

    // Confronto delle stringhe e restituzione dell'esito
    if (confronto == 0)
        printf("Le due frasi sono uguali\n");
    else
        printf("Le due frasi sono diverse\n");

    printf("----------------------------\n");
    printf("Clicca un tasto per chiudere");
    getch();
    return 0;
}
