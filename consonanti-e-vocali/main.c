// Traccia: Scrivi un programma che permetta all'utente di inserire una frase da tastiera.
// Successivamente, il programma dovrà contare il numero di consonanti e il numero di vocali presenti nella frase.
// Verrà mostrato a video il conteggio di consonanti, vocali e il numero di caratteri speciali presenti.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARATTERI 10000+1

void banner_menu(int conferma);

int main(int argc, char *argv[]){
    //sezione dichiarativa
    char frase[CARATTERI];
    int numero_consonanti = 0, numero_vocali = 0, caratteri_speciali = 0, scelta, conferma = 0, i;

    //inizio menu
    do {
        banner_menu(conferma);
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
                if ((carattere >= 'a' && carattere <= 'z') || (carattere >= 'A' && carattere <= 'Z')) {
                    // Verifica se il carattere è una vocale
                    if (carattere == 'a' || carattere == 'A' || carattere == 'e' || carattere == 'E' ||
                        carattere == 'i' || carattere == 'I' || carattere == 'o' || carattere == 'O' ||
                        carattere == 'u' || carattere == 'U') {
                        numero_vocali++;
                    } else { // Altrimenti è una consonante
                        numero_consonanti++;
                    }
                } else {
                    caratteri_speciali++;
                }
            }
            break;
        case '2': //visualizza risultati
            system("cls");
            if (conferma == 1) { //se è presente una frase
                printf("Consonanti:\t\t%i\n", numero_consonanti);
                printf("Vocali:\t\t\t%i\n", numero_vocali);
                printf("Caratteri speciali:\t%i\n", caratteri_speciali);
                printf("Premi un tasto per tornare al menu . . .\n>");
                getch();
            } else { //se non è presente una frase
                for (i = 5; i > 0; i--) {
                    system("cls");
                    banner_menu(conferma);
                    printf(">Devi inserire una frase attendi [%i]", i);
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

void banner_menu(int conferma) {
    system("cls");
    printf("1. Inserisci la frase ");
    if (conferma == 1)
        printf("[Inserita]\n");
    else
        printf("[Mancante]\n");
    printf("2. Visualizza le lettere della frase\n");
    printf("3. Esci\n");
}
