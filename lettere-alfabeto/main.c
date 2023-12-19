// Traccia: Scrivi un programma che permetta all'utente di inserire una frase da tastiera.
// Successivamente, il programma dovrà contare quante volte ogni lettera dell'alfabeto compare nella frase.
// Verrà mostrato a video il numero di occorrenze di ciascuna lettera dell'alfabeto e il numero di caratteri speciali presenti.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 10000+1
#define NUMERO_LETTERE 26

void banner_menu();

int main(int argc, char *argv[]){
    //sezione dichiarativa
    char lettera_simbolo[NUMERO_LETTERE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int lettera[NUMERO_LETTERE] = {0}; //array per il numero di volte che compaiono le lettere
    int i, conferma = 0, caratteri_speciali = 0; //i=indice; conferma=per verificare che una frase è stata inserita; caratteri_speciali=mantiene il conteggio di essi
    char frase[CARATTERI]; //contiene la frase inserita
    char scelta; //scelta del menu

    do {
        banner_menu();
        printf(">");
        scelta = getch();

        switch (scelta) {
        case '1': //Inserimento frase
            system("cls");
            printf("Inserisci la frase:\n>");
            fgets(frase, sizeof(frase), stdin);

            // Rimuove il carattere di nuova linea '\n' se presente (aggiunto da fgets)
            if (frase[strlen(frase) - 1] == '\n') {
                frase[strlen(frase) - 1] = '\0';
            }

            conferma = 1;
            for (i = 0; i < strlen(frase); i++) { //controlla delle lettere
                char carattere = frase[i];
                if (carattere >= 'a' && carattere <= 'z') {
                    lettera[carattere - 'a']++;
                } else if (carattere >= 'A' && carattere <= 'Z') {
                    lettera[carattere - 'A']++;
                } else {
                    caratteri_speciali++;
                }
            }
            break;
        case '2': //visualizza risultati
            system("cls");
            if (conferma == 1) { //se è presente una frase
                printf("Lettera\t\tPresente\n");
                for (i = 0; i < NUMERO_LETTERE; i++) {
                    printf("  %c\t\t   %d\n", lettera_simbolo[i], lettera[i]);
                }
                printf("Caratteri speciali: %d\n", caratteri_speciali);
                printf("Premi un tasto per tornare al menu . . .\n>");
                getch();
            } else { //se non è presente una frase
                for (i = 5; i > 0; i--) {
                    system("cls");
                    banner_menu();
                    printf(">Devi inserire una frase attendi [%d]", i);
                    sleep(1);
                }
            }
            break;
        case '3': //chiusura programma
            system("cls");
            for (i = 0; i < 5; i++) {
                printf("Grazie di aver utilizzato il programma\n");
                sleep(1);
            }
            break;
        default: //per altri valori
            scelta = 1;
        }
    } while (scelta != '3');

    return 0;
}

void banner_menu() {
    system("cls");
    printf("1. Inserisci la frase\n");
    printf("2. Visualizza le lettere della frase\n");
    printf("3. Esci\n");
}
