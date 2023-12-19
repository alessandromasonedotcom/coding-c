// Traccia: Scrivere un programma che acquisisca da tastiera due array di interi, il primo di dimensione 3 e il secondo di dimensione 5.
// Restituisce in output un terzo array che accoda al primo il secondo.

#include <stdio.h>
#include <stdlib.h>

// Costanti per le dimensioni dei vettori
#define MAX_A 3
#define MAX_B 5

// Prototipi delle funzioni
void caricamentoVettoreA(int vettore_A[]);
void caricamentoVettoreB(int vettore_B[]);
void concatenaVettori(int vettore_A[], int vettore_B[], int vettore_C[]);
void visualizzaVettore(int vettore_C[]);
void uscitaProgramma();

// Funzione per il caricamento del primo vettore
void caricamentoVettoreA(int vettore_A[]) {
    printf("Inserisci %d valori del Vettore A:\n", MAX_A);
    for (int i = 0; i < MAX_A; i++) {
        printf("Valore %d: ", i + 1);
        scanf("%d", &vettore_A[i]);
    }
}

// Funzione per il caricamento del secondo vettore
void caricamentoVettoreB(int vettore_B[]) {
    printf("Inserisci %d valori del Vettore B:\n", MAX_B);
    for (int i = 0; i < MAX_B; i++) {
        printf("Valore %d: ", i + 1);
        scanf("%d", &vettore_B[i]);
    }
}

// Funzione per concatenare il primo vettore al secondo vettore
void concatenaVettori(int vettore_A[], int vettore_B[], int vettore_C[]) {
    int j = 0;
    for (int i = 0; i < MAX_A; i++) {
        vettore_C[j] = vettore_A[i];
        j++;
    }
    for (int i = 0; i < MAX_B; i++) {
        vettore_C[j] = vettore_B[i];
        j++;
    }
}

// Funzione per visualizzare il terzo vettore
void visualizzaVettore(int vettore_C[]) {
    printf("Vettore C\nElemento\tContenuto");
    for (int i = 0; i < MAX_A + MAX_B; i++) {
        printf("\n   %d\t\t   %d", i + 1, vettore_C[i]);
    }
}

// Funzione di ringraziamento e uscita dal programma
void uscitaProgramma() {
    printf("\nPremi un tasto per uscire...");
    getch();
    system("cls");
    printf("Grazie di aver utilizzato il programma\n\n");
}

// Funzione principale del programma
int main(int argc, char *argv[]) {
    int vettore_A[MAX_A];
    int vettore_B[MAX_B];
    int vettore_C[MAX_A + MAX_B];

    caricamentoVettoreA(vettore_A);
    caricamentoVettoreB(vettore_B);
    concatenaVettori(vettore_A, vettore_B, vettore_C);
    visualizzaVettore(vettore_C);
    uscitaProgramma();

    system("PAUSE");
    return 0;
}
