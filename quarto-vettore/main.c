// Traccia: Scrivere un programma in C che acquisisca da tastiera 3 array di tipo intero le cui dimensioni sono fornite da tastiera.
// Il programma dovrà restituire a video un quarto vettore che contenga la sequenza del primo, del secondo e del terzo array.
// Inoltre, dovrà restituire il numero di elementi pari e dispari presenti nel quarto array.

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

// Funzione per il caricamento del terzo vettore
void caricamentoVettoreC(int vettore_C[], int n_c) {
    printf("Inserisci %d valori del Vettore C:\n", n_c);
    for (int i = 0; i < n_c; i++) {
        printf("Valore %d: ", i + 1);
        scanf("%d", &vettore_C[i]);
    }
}

// Funzione per concatenare i tre vettori nel quarto vettore
void concatenazioneVettori(int vettore_A[], int vettore_B[], int vettore_C[], int vettore_D[], int n_a, int n_b, int n_c) {
    int j = 0;
    for (int i = 0; i < n_a; i++) {
        vettore_D[j] = vettore_A[i];
        j++;
    }
    for (int i = 0; i < n_b; i++) {
        vettore_D[j] = vettore_B[i];
        j++;
    }
    for (int i = 0; i < n_c; i++) {
        vettore_D[j] = vettore_C[i];
        j++;
    }
}

// Funzione per contare il numero di elementi pari nel vettore D
int contaPari(int vettore_D[], int size) {
    int contatore = 0;
    for (int i = 0; i < size; i++) {
        if (vettore_D[i] % 2 == 0) {
            contatore++;
        }
    }
    return contatore;
}

// Funzione per contare il numero di elementi dispari nel vettore D
int contaDispari(int vettore_D[], int size) {
    int contatore = 0;
    for (int i = 0; i < size; i++) {
        if (vettore_D[i] % 2 != 0) {
            contatore++;
        }
    }
    return contatore;
}

// Funzione principale del programma
int main() {
    int n_a, n_b, n_c;

    printf("Inserisci il numero di elementi del vettore A: ");
    scanf("%d", &n_a);
    int vettore_A[n_a];
    caricamentoVettoreA(vettore_A, n_a);

    printf("Inserisci il numero di elementi del vettore B: ");
    scanf("%d", &n_b);
    int vettore_B[n_b];
    caricamentoVettoreB(vettore_B, n_b);

    printf("Inserisci il numero di elementi del vettore C: ");
    scanf("%d", &n_c);
    int vettore_C[n_c];
    caricamentoVettoreC(vettore_C, n_c);

    int n_d = n_a + n_b + n_c;
    int vettore_D[n_d];
    concatenazioneVettori(vettore_A, vettore_B, vettore_C, vettore_D, n_a, n_b, n_c);

    printf("\nQuarto vettore (vettore D) contenente la sequenza dei tre vettori:\n");
    for (int i = 0; i < n_d; i++) {
        printf("%d ", vettore_D[i]);
    }

    int num_pari = contaPari(vettore_D, n_d);
    int num_dispari = contaDispari(vettore_D, n_d);

    printf("\n\nNumero di elementi pari nel vettore D: %d", num_pari);
    printf("\nNumero di elementi dispari nel vettore D: %d\n", num_dispari);

    return 0;
}
