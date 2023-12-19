// Traccia: Una gara automobilistica si è disputata con 15 piloti. In un vettore nomi[] sono memorizzati i nomi dei piloti e in un vettore posizione[] la posizione di arrivo. 
// Inserire da tastiera un nominativo e visualizzare a schermo la posizione.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMERO_PARTECIPANTI 15

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    char nomi[NUMERO_PARTECIPANTI][256] = {
        {"HAMILTON"}, {"BOTTAS"}, {"VERSTAPPEN"}, {"PEREZ"}, {"RICCIARDO"}, {"SAINZ"}, {"ALBON"}, {"LECLERC"}, {"NORRIS"}, {"GASLY"}, {"STROLL"}, {"OCON"}, {"VETTEL"}, {"KVYAT"}, {"HULKENBERG"}
    };
    int posizioni[NUMERO_PARTECIPANTI] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    char nome_scelto[256];
    int i, trovato = 0;

    //sezione di in-put
    printf("Inserisci il nome del pilota per visualizzarne la posizione: ");
    fgets(nome_scelto, sizeof(nome_scelto), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (nome_scelto[strlen(nome_scelto) - 1] == '\n') {
        nome_scelto[strlen(nome_scelto) - 1] = '\0';
    }

    // Confronta il nome inserito con i nomi dei piloti
    for (i = 0; i < NUMERO_PARTECIPANTI; i++) {
        if (strcmp(nomi[i], nome_scelto) == 0) {
            printf("Pilota: %s\n", nomi[i]);
            printf("Posizione: %d\n", posizioni[i]);
            trovato = 1;
            break;
        }
    }

    //sezione di out-put
    if (!trovato) {
        printf("Il pilota con nome '%s' non è presente nella lista.\n", nome_scelto);
    }

    printf("Premi un tasto per uscire.\n");
    getch();
    return 0;
}
