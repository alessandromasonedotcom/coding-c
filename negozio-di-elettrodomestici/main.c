// Traccia: In un negozio di elettrodomestici, sono presenti due cataloghi. Uno dei prodotti e l'altro dei prezzi,
// alla richiesta del cliente di un determinato prodotto/articolo, gli viene indicato il relativo prezzo.
// La richiesta termina quando non ci sono più domande del cliente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMERO_ARTICOLI 15
#define IVA_ITALIA 22

int main() {
    // Sezione dichiarativa
    srand(time(NULL));
    char nome_scelto[256];
    char ripetere;
    char nomi[NUMERO_ARTICOLI][256] = {
        {"Lavastoviglie"}, {"Lavatrice"}, {"Asciugatrice"}, {"Forno a microonde"}, {"Forno"}, {"Tostapane"},
        {"Piastra per i waffle"}, {"Frigorifero"}, {"Freezer"}, {"Aspirapolvere"}, {"Condizionatore"},
        {"Purificatore d'aria"}, {"Frullatore"}, {"Ventilatore da soffitto"}, {"Robot domestico"}
    };
    int a[NUMERO_ARTICOLI];
    float prezzo[NUMERO_ARTICOLI] = {
        3700.00, 700.00, 500.00, 150.00, 539.00, 25.00, 42.90, 690.00, 338.90, 150.00,
        500.00, 250.00, 35.00, 50.00, 520.00
    };
    char nome_temp[256];
    float prezzo_iva = 0;

    // For per assegnare una posizione casuale all'interno della lista
    for (int i = 0; i < NUMERO_ARTICOLI; i++) {
        a[i] = rand() % NUMERO_ARTICOLI;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                i--;
                break;
            }
        }
    }

    do { // Loop principale - richieste del cliente
        int congruenza = -1;
        do {
            system("cls");
            printf("----------------------------------\n");
            printf("----!Catalogo elettrodomestici!---\n");
            printf("----------------------------------\n");
            for (int i = 0; i < NUMERO_ARTICOLI; i++) {
                printf("\t| %i. ", i + 1);
                puts(nomi[a[i]]);
            }
            printf("----------------------------------\n");
            // Sezione di input
            printf("Inserire il nome dell'articolo per visualizzarne il prezzo.\n");
            printf("----------------------------------\n>");
            gets(nome_scelto);
            system("cls");
            // Sezione controllo del nome
            congruenza = -1;
            for (int i = 0; i < NUMERO_ARTICOLI; i++) {
                strcpy(nome_temp, nomi[a[i]]);
                congruenza = strcmp(strupr(nome_temp), strupr(nome_scelto));
                if (congruenza == 0) {
                    printf("---------!Prodotto scelto!----------\n");
                    printf("Articolo: %s\n", nomi[a[i]]);
                    prezzo_iva = prezzo[a[i]] + ((prezzo[a[i]] * IVA_ITALIA) / 100);
                    printf("Prezzo: %.2f Euro (iva escl.)\n", prezzo[a[i]]);
                    printf("Prezzo: %.2f Euro (iva incl.)\n", prezzo_iva);
                    printf("----------------------------------\n");
                    printf("Premi un tasto per continuare . . .\n>");
                    getch();
                    break;
                }
            }
            // Se non è presente una congruenza nei nomi
            if (congruenza != 0) {
                for (int i = 3; i >= 0; i--) {
                    system("cls");
                    printf("----------------------------------\n");
                    printf("Articolo non presente [%i] secondi\n", i);
                    printf("----------------------------------\n>");
                    sleep(1);
                }
            }
        } while (congruenza != 0);

        // Sezione di input se si vuole cercare un altro prodotto
        do {
            system("cls");
            printf("----------------------------------\n");
            printf("Si vuole cercare un altro\nprodotto? (y/n)\n");
            printf("----------------------------------\n>");
            ripetere = getch();
            if ((ripetere != 'y') && (ripetere != 'n')) {
                for (int i = 3; i >= 0; i--) {
                    system("cls");
                    printf("----------------------------------\n");
                    printf("In-put errato attendi [%i] secondi\n", i);
                    printf("----------------------------------\n>");
                    sleep(1);
                }
            }
        } while ((ripetere != 'y') && (ripetere != 'n'));

    } while (ripetere != 'n');

    // Sezione di out-put
    system("cls");
    for (int i = 0; i < 5; i++) {
        printf("Grazie di aver utilizzato il programma\n\n");
        sleep(1);
    }

    return 0;
}
