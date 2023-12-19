// Traccia: Scrivere un programma che, data una stringa di N caratteri, la inverta (es: "Informatica" diventa "acitamrofnI").

#include <stdio.h>
#include <string.h>

int main() {
    // Sezione dichiarativa
    char temp;
    char stringa[100];
    int lunghezza_parola, i, j;

    // Sezione di input
    printf("Inserisci una parola: ");
    fgets(stringa, sizeof(stringa), stdin);
    stringa[strcspn(stringa, "\n")] = '\0'; // Rimuove il carattere di newline (se presente)

    // Calcolo lunghezza parola
    lunghezza_parola = strlen(stringa);

    // Specchiatura della parola
    j = lunghezza_parola - 1;
    for (i = 0; i < lunghezza_parola / 2; i++) {
        temp = stringa[i];
        stringa[i] = stringa[j];
        stringa[j] = temp;
        j--;
    }

    // Sezione di output
    printf("Ecco la tua parola specchiata: %s\n", stringa);

    return 0;
}
