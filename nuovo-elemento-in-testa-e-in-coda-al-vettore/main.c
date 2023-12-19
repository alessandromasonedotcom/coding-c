// Traccia: Dopo aver caricato in memoria un vettore di interi con dimensione d (con d inserito da tastiera), inserire 
// "in coda" ed in "testa" al vettore un nuovo elemento. Scrivere il vettore iniziale e il vettore modificato.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void traccia();
int input();
void caricamentoVettore();
void aggiungiElementoTesta();
void aggiungiElementoCoda();
void visualizzaVettore();
void banner_time();
void uscitaProgramma();

int main() {
    // Sezione dichiarativa
    int d, nuovo_elemento_testa, nuovo_elemento_coda;

    // Visualizza la traccia per alcuni secondi
    traccia();

    // Richiedi la dimensione del vettore
    d = input();

    // Dichiarazione e caricamento del vettore
    int vettore[d];
    caricamentoVettore(vettore, d);

    // Richiedi il nuovo elemento da aggiungere in testa
    nuovo_elemento_testa = valore("testa");

    // Richiedi il nuovo elemento da aggiungere in coda
    nuovo_elemento_coda = valore("coda");

    // Aggiungi l'elemento in testa
    aggiungiElementoTesta(vettore, d, nuovo_elemento_testa);

    // Aggiungi l'elemento in coda
    aggiungiElementoCoda(vettore, d, nuovo_elemento_coda);

    // Visualizza il vettore iniziale
    printf("\nVettore iniziale:\n");
    visualizzaVettore(vettore, d);

    // Visualizza il vettore modificato
    printf("\nVettore modificato:\n");
    visualizzaVettore(vettore, d + 2);

    uscitaProgramma();
    return 0;
}

// Funzione per visualizzare la traccia
void traccia() {
    int i;
    for (i = 10; i > 0; i--) {
        system("cls");
        banner_time();
        printf("Dopo aver caricato in memoria un vettore di interi con dimensione d (con d inserito da tastiera),\n");
        printf("inserire \"in coda\" ed in \"testa\" al vettore un nuovo elemento. Scrivere il vettore iniziale e il vettore modificato.\n\n");
        printf("Sarai reinderizzato al programma tra %i", i);
        sleep(1);
    }
}

// Funzione per richiedere l'input della dimensione del vettore
int input() {
    int x;
    do {
        system("cls");
        banner_time();
        printf("Inserire il numero di elementi del vettore (deve essere maggiore di 0): ");
        scanf("%i", &x);
        if (x <= 0) {
            printf("[!] Il valore immesso non e' valido. Riprovare.\n");
            system("PAUSE");
        }
    } while (x <= 0);
    return x;
}

// Funzione per caricare il vettore
void caricamentoVettore(int vettore[], int d) {
    int i;
    system("cls");
    banner_time();
    printf("Caricamento del vettore A\n");
    for (i = 0; i < d; i++) {
        printf("Inserisci il %i valore del Vettore A: ", i + 1);
        scanf("%i", &vettore[i]);
    }
}

// Funzione per richiedere un nuovo valore da inserire in testa o in coda
int valore(const char *posizione) {
    int x;
    system("cls");
    banner_time();
    printf("Inserire nuovo valore in %s: ", posizione);
    scanf("%i", &x);
    return x;
}

// Funzione per aggiungere un nuovo elemento in testa al vettore
void aggiungiElementoTesta(int vettore[], int d, int nuovo_elemento) {
    for (int i = d - 1; i >= 0; i--) {
        vettore[i + 1] = vettore[i];
    }
    vettore[0] = nuovo_elemento;
}

// Funzione per aggiungere un nuovo elemento in coda al vettore
void aggiungiElementoCoda(int vettore[], int d, int nuovo_elemento) {
    vettore[d] = nuovo_elemento;
}

// Funzione per visualizzare il vettore
void visualizzaVettore(int vettore[], int d) {
    printf("\tElemento\tContenuto\n");
    for (int i = 0; i < d; i++) {
        printf("\t   %i\t\t   %i\n", i + 1, vettore[i]);
    }
    printf("----------------------------------------------------\n");
}

// Funzione per visualizzare l'orario
void banner_time() {
    time_t t;
    time(&t);
    printf("----------------------------------------------------\n");
    printf("%s", ctime(&t));
    printf("----------------------------------------------------\n");
}

// Funzione ringraziamento
void uscitaProgramma() {
    int i;
    printf("Premi un tasto per chiudere il programma...");
    getch();
    system("cls");
    for (i = 0; i < 5; i++) {
        printf("Grazie di aver utilizzato il programma\n\n");
        sleep(1);
    }
}
