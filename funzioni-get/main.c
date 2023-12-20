#include <stdio.h>
#include <stdlib.h>
// Particolari funzioni di get adatte ai casi in cui si deve effettuare l'input
// di un solo carattere
int main(int argc, char *argv[]) {
    int i;
    printf("Inserisci un carattere da tastiera e non viene visualizzato\n");
    i = getch();
    printf("%i\n", i);

    printf("Inserisci un carattere da tastiera visualizzando senza enter\n");
    getche();
    printf("\n");

    printf("Inserisci un carattere da tastiera visualizzandoo con enter\n");
    getchar();
    printf("\n");
    system("PAUSE");
    return 0;
}