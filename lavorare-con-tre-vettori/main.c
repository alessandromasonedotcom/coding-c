// Traccia: Scrivere un programma in C che acquisisca da tastiera due array di interi le cui dimensioni sono fornite da tastiera.
// Il programma dovrà restituire in output un terzo array ottenuto concatenando il secondo array al primo e visualizzare il valore massimo e minimo del terzo array.

#include <stdio.h>
#include <stdlib.h>

// Funzione per il caricamento del primo vettore
void caricamentoVettoreA(int vettore_A[], int n_a) {
    printf("Inserisci %d valori del Vettore A:\n", n_a);
    for (int i = 0; i < n_a; i++) {
        printf("Valore %d: ", i + 1);
        scanf("%d", &vettore_A[i]);
    }
}

// Funzione per il caricamento del secondo vettore
void caricamentoVettoreB(int vettore_B[], int n_b) {
    printf("Inserisci %d valori del Vettore B:\n", n_b);
    for (int i = 0; i < n_b; i++) {
        printf("Valore %d: ", i + 1);
        scanf("%d", &vettore_B[i]);
    }
}

// Funzione per concatenare il primo vettore al secondo vettore
void concatenaVettori(int vettore_A[], int vettore_B[], int vettore_C[], int n_a, int n_b) {
    int j = 0;
    for (int i = 0; i < n_a; i++) {
        vettore_C[j] = vettore_A[i];
        j++;
    }
    for (int i = 0; i < n_b; i++) {
        vettore_C[j] = vettore_B[i];
        j++;
    }
}

// Funzione per visualizzare il terzo vettore
void visualizzaVettore(int vettore_C[], int n_a, int n_b) {
    printf("Vettore C\nElemento\tContenuto");
    for (int i = 0; i < n_a + n_b; i++) {
        printf("\n   %d\t\t   %d", i + 1, vettore_C[i]);
    }
}

// Funzione per trovare il massimo valore nel terzo vettore
int massimo(int vettore_C[], int n_a, int n_b) {
    int max = vettore_C[0];
    for (int i = 1; i < n_a + n_b; i++) {
        if (vettore_C[i] > max) {
            max = vettore_C[i];
        }
    }
    return max;
}

// Funzione per trovare il minimo valore nel terzo vettore
int minimo(int vettore_C[], int n_a, int n_b) {
    int min = vettore_C[0];
    for (int i = 1; i < n_a + n_b; i++) {
        if (vettore_C[i] < min) {
            min = vettore_C[i];
        }
    }
    return min;
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
    int n_a, n_b; // Numero di elementi dei vettori A e B

    printf("Inserisci il numero di elementi del vettore A: ");
    scanf("%d", &n_a);
    int vettore_A[n_a];
    caricamentoVettoreA(vettore_A, n_a);

    printf("Inserisci il numero di elementi del vettore B: ");
    scanf("%d", &n_b);
    int vettore_B[n_b];
    caricamentoVettoreB(vettore_B, n_b);

    int vettore_C[n_a + n_b];
    concatenaVettori(vettore_A, vettore_B, vettore_C, n_a, n_b);

    visualizzaVettore(vettore_C, n_a, n_b);

    int max = massimo(vettore_C, n_a, n_b);
    int min = minimo(vettore_C, n_a, n_b);
    printf("\nIl valore massimo e': %d", max);
    printf("\nIl valore minimo e': %d", min);

    uscitaProgramma();

    system("PAUSE");
    return 0;
}
