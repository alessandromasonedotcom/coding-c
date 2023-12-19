// Traccia: Dato un numero N, creare due vettori della stessa dimensione e inizializzarli casualmente.
// Ottenere come output il concatenamento alternato dei due vettori in un terzo array.

#include <stdio.h>
#include <stdlib.h>

// Funzione di ringraziamento
void banner(void) {
    printf("Grazie di aver utilizzato il programma\n\n");
}

// Funzione della traccia
void banner_traccia(void) {
    int i = 0;
    for (i = 5; i > 0; i--) {
        system("cls");
        printf("Data un numero N, creare due vettori della stessa dimensione e inizializzarli casualmente.\n");
        printf("Ottenere come output il concatenamento alternato dei due vettori in un terzo array.");
        printf("\n[!] Attendere %i secondi", i);
        sleep(1);
    }
    system("cls");
}

int main(int argc, char *argv[]) {
    // Sezione dichiarativa
    int a = 0, i, j = 0;
    srand(time(NULL));

    // Funzione della traccia
    banner_traccia();

    // Sezione di input del numero di elementi
    do {
        system("cls");
        printf("Inserire numero di Elementi:");
        scanf("%i", &a);
        if (a < 1) {
            for (i = 5; i > 0; i--) {
                system("cls");
                printf("[!] Il valore immesso non e' valido. Reinserire il valore tra %i secondi", i);
                sleep(1);
            }
        }
    } while (a < 1); // Deve essere maggiore di 0

    // Dichiarazione e assegnazione numeri casuali ai vettori
    int array_a[a];
    int array_b[a];
    int array_c[a + a];

    // Assegnazione numeri casuali al vettore array_a
    for (i = 0; i < a; i++) {
        array_a[i] = rand() % 50 + 1;
    }

    // Assegnazione numeri casuali al vettore array_b
    for (i = 0; i < a; i++) {
        array_b[i] = rand() % 50 + 1;
    }

    // Concatenamento dei due array
    for (i = 0; i < a + a; i++) {
        array_c[i] = array_a[j];
        i++;
        array_c[i] = array_b[j];
        j++;
    }

    // Sezione di visualizzazione dei dati
    printf("----------------------------------------------\nCaratteristiche del vettore C di %i elementi:\n----------------------------------------------", a + a);
    printf("\nElemento\tContenuto");
    for (i = 0; i < a + a; i++) {
        printf("\n   %i\t\t   %i", i + 1, array_c[i]);
    }
    printf("\n----------------------------------------------\n");
    printf("Premi un tasto per continuare...");

    // Sezione chiusura programma
    getch();
    system("cls");
    for (i = 0; i < 10; i++) {
        banner();
        sleep(1);
    }

    system("PAUSE");
    return 0;
}
