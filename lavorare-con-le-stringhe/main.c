// Traccia:
// Scrivi un programma che legge da tastiera il cognome e il nome,
// la data di nascita (nel formato yyyy/mm/dd) e il luogo di nascita.
// Successivamente, restituisce a video le informazioni inserite.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Sezione dichiarativa
    char nome[20];
    char cognome[20];
    char data[11];
    char luogo[50];

    // Sezione di input
    printf("Inserisci il tuo Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Inserisci il tuo Cognome: ");
    fgets(cognome, sizeof(cognome), stdin);

    printf("Inserisci la tua data di nascita (yyyy/mm/dd): ");
    fgets(data, sizeof(data), stdin);

    printf("Inserisci il luogo di nascita: ");
    fgets(luogo, sizeof(luogo), stdin);

    // Sezione di output
    system("cls");
    printf("Scheda anagrafica\n");
    printf("Nome:\t\t\t%s", nome);
    printf("Cognome:\t\t%s", cognome);
    printf("Data di nascita:\t%s", data);
    printf("Luogo:\t\t\t%s", luogo);

    // Sezione di chiusura programma
    printf("Premi un tasto per uscire");
    getch();
    return 0;
}
