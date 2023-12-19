// Traccia: Una gara automobilistica si è disputata con 15 piloti. In un vettore nomi[] sono memorizzati i nomi dei piloti e in un vettore posizione[] la posizione di arrivo. 
// Inserire da tastiera un nominativo e visualizzare a schermo la posizione.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NUMERO_PARTECIPANTI 15

int main(int argc, char *argv[]) {
    //sezione dichiarativa
    srand(time(NULL));
    char nomi[NUMERO_PARTECIPANTI][256];
    int posizioni[NUMERO_PARTECIPANTI];
    int a[NUMERO_PARTECIPANTI];
    char nome_scelto[256];
    int i, trovato = 0;

    // Inserimento dei nomi e delle posizioni da parte dell'Admin
    strcpy(nomi[0], "HAMILTON"); strcpy(nomi[1], "BOTTAS"); strcpy(nomi[2], "VERSTAPPEN"); strcpy(nomi[3], "PEREZ"); strcpy(nomi[4], "RICCIARDO");
    strcpy(nomi[5], "SAINZ"); strcpy(nomi[6], "ALBON"); strcpy(nomi[7], "LECLERC"); strcpy(nomi[8], "NORRIS"); strcpy(nomi[9], "GASLY");
    strcpy(nomi[10], "STROLL"); strcpy(nomi[11], "OCON"); strcpy(nomi[12], "VETTEL"); strcpy(nomi[13], "KVYAT"); strcpy(nomi[14], "HULKENBERG");

    // Assegnare una posizione casuale a ciascun pilota
    for (i = 0; i < NUMERO_PARTECIPANTI; i++) {
        a[i] = rand() % 15;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                i--;
                break;
            }
        }
    }

    for (i = 0; i < NUMERO_PARTECIPANTI; i++) {
        posizioni[i] = i + 1;
    }

    //sezione di input
    printf("Inserisci il nome del pilota per visualizzarne la posizione: ");
    fgets(nome_scelto, sizeof(nome_scelto), stdin);

    // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
    if (nome_scelto[strlen(nome_scelto) - 1] == '\n') {
        nome_scelto[strlen(nome_scelto) - 1] = '\0';
    }

    // Confronta il nome inserito con i nomi dei piloti
    for (i = 0; i < NUMERO_PARTECIPANTI; i++) {
        if (strcmp(nomi[a[i]], nome_scelto) == 0) {
            printf("Pilota: %s\n", nomi[a[i]]);
            printf("Posizione: %d\n", posizioni[a[i]]);
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
