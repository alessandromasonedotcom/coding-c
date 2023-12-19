// Traccia:
// Scrivi un programma che, dato un nome in input, costruisca e stampi una stringa con il testo "Ciao, nome".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char nome[100];
    char ciao[] = "Ciao, ";

    // Input
    printf("Come ti chiami?\n");
    fgets(nome, sizeof(nome), stdin);

    // Rimuovi il carattere di newline "\n" dalla stringa letta con fgets
    nome[strcspn(nome, "\n")] = '\0';

    // Concatenamento
    strcat(ciao, nome);

    // Output
    system("cls");
    puts(ciao);

    // Chiusura programma
    printf("Clicca un tasto per continuare . . .");
    getch();
    return 0;
}
