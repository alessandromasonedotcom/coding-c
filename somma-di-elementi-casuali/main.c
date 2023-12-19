// Traccia: Caricare un array numerico di N elementi in modo casuale.
// Visualizzare a video gli elementi e la loro somma.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funzione di ringraziamento
void banner(void) {
    printf("Grazie di aver utilizzato il programma\n");
}

// Funzione traccia
void banner_traccia(void) {
    int i;
    for (i = 5; i > 0; i--) {
        system("cls");
        printf("Caricare un array numerico di N elementi in modo casuale.\n");
        printf("Visualizzare a video gli elementi e la loro somma.");
        printf("\n[!] Attendere %i secondi", i);
        sleep(1);
    }
    system("cls");
}

int main() {
    // Dichiarazione delle variabili
    int n, i, somma = 0;
    srand(time(NULL));

    // Richiamo della funzione per visualizzare la traccia
    banner_traccia();

    // Input del numero di elementi nell'array (deve essere maggiore di 0)
    do {
        system("cls");
        printf("Inserire il numero di elementi nell'array (deve essere maggiore di 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    // Dichiarazione e inizializzazione dell'array
    int array[n];
    
    // Assegnazione numeri casuali all'array
    for (i = 0; i < n; i++) {
        array[i] = rand() % 50 + 1;
    }

    // Calcolo della somma degli elementi
    for (i = 0; i < n; i++) {
        somma += array[i];
    }

    // Visualizzazione dei dati
    system("cls");
    printf("----------------------------------------------\nCaratteristiche del vettore di %d elementi:\n", n);
    printf("----------------------------------------------\n");
    printf("Elemento\tContenuto\n");
    for (i = 0; i < n; i++) {
        printf("   %d\t\t   %d\n", i + 1, array[i]);
    }
    printf("----------------------------------------------\n");
    printf("Somma: %d\n", somma);
    printf("----------------------------------------------\n");
    printf("Premi un tasto per continuare...");

    // Chiusura del programma
    getch();
    system("cls");
    for (i = 0; i < 10; i++) {
        banner();
        sleep(1);
    }

    return 0;
}
