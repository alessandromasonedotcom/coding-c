// Traccia: Caricare in modo casuale due vettori A e B con N elementi (uguale lunghezza) e sommare gli elementi di A e B in un vettore C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
void casuale(int array_a[], int array_b[], int a);
void banner_menu();
void visualizzaVettore(const char* nome_vettore, int array[], int a);
void somma_vettori(const int array_a[], const int array_b[], int array_c[], int a);

int main() {
    int a; // Numero di elementi per array

    a = input();

    // Dichiarazione e inizializzazione degli array
    int array_a[a];
    int array_b[a];
    int array_c[a];

    // Generazione casuale dei numeri per gli array A e B
    casuale(array_a, array_b, a);

    // Ciclo per il menu
    int scelta;
    do {
        banner_menu();
        scanf("%i", &scelta);

        switch (scelta) {
            case 1:
                visualizzaVettore("A", array_a, a);
                break;
            case 2:
                visualizzaVettore("B", array_b, a);
                break;
            case 3:
                somma_vettori(array_a, array_b, array_c, a);
                visualizzaVettore("C (Somma)", array_c, a);
                break;
            case 4:
                // Aggiungere la funzione per la differenza
                break;
            case 5:
                // Aggiungere la funzione per la moltiplicazione
                break;
            case 6:
                // Aggiungere la funzione per la divisione
                break;
            case 7:
                printf("Grazie di aver utilizzato il programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }

        printf("\n");

    } while (scelta != 7);

    return 0;
}

int input() {
    int x;
    do {
        printf("Inserire il numero di elementi per vettore: ");
        scanf("%i", &x);
        if (x <= 0) {
            printf("Il valore immesso non e' valido. Riprovare.\n");
        }
    } while (x <= 0);
    return x;
}

void casuale(int array_a[], int array_b[], int a) {
    srand(time(NULL));
    for (int i = 0; i < a; i++) {
        array_a[i] = rand() % 101; // Valori casuali da 0 a 100 per il vettore A
        array_b[i] = rand() % 101; // Valori casuali da 0 a 100 per il vettore B
    }
}

void banner_menu() {
    printf("-----------------------------------------------------------------------------\n");
    printf("1. Contenuto del Vettore A\n");
    printf("2. Contenuto del Vettore B\n");
    printf("3. Somma dei due vettori in C\n");
    printf("4. Differenza dei due vettori in C\n");
    printf("5. Moltiplicazione dei due vettori in C\n");
    printf("6. Divisione positivi nel Vettore C\n");
    printf("7. Esci\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Inserire voce del menu: ");
}

void visualizzaVettore(const char* nome_vettore, int array[], int a) {
    printf("\nContenuto del Vettore %s:\n", nome_vettore);
    for (int i = 0; i < a; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void somma_vettori(const int array_a[], const int array_b[], int array_c[], int a) {
    for (int i = 0; i < a; i++) {
        array_c[i] = array_a[i] + array_b[i];
    }
}
