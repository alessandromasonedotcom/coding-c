// Traccia:
// Caricare un vettore che contiene l'età di un gruppo di persone.
// Il caricamento avviene in modo casuale con un range tra 1 e 99.
// Da tastiera verrà inserito invece il numero delle persone N.
// Visualizzare le età delle persone maggiorenni e la loro posizione.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void banner_time(void);
void banner_grazie(void);
void caricamento_vettore_persone_totali(int numero_di_persone, int vettore_persone_totali[]);
void visualizza_persone_maggiorenni(int vettore_persone_totali[], int numero_di_persone);

int main() {
    int numero_di_persone = 0;
    printf("Inserire il numero di persone: ");
    scanf("%d", &numero_di_persone);

    int vettore_persone_totali[numero_di_persone];
    srand(time(NULL));
    caricamento_vettore_persone_totali(numero_di_persone, vettore_persone_totali);

    printf("Persone maggiorenni e relative posizioni:\n");
    visualizza_persone_maggiorenni(vettore_persone_totali, numero_di_persone);

    banner_grazie();
    system("PAUSE");
    return 0;
}

void caricamento_vettore_persone_totali(int numero_di_persone, int vettore_persone_totali[]) {
    for (int i = 0; i < numero_di_persone; i++) {
        vettore_persone_totali[i] = rand() % 99 + 1;
    }
}

void visualizza_persone_maggiorenni(int vettore_persone_totali[], int numero_di_persone) {
    for (int i = 0; i < numero_di_persone; i++) {
        if (vettore_persone_totali[i] >= 18) {
            printf("Posizione: %d, Età: %d\n", i, vettore_persone_totali[i]);
        }
    }
}

void banner_time(void) {
    time_t t;
    time(&t);
    printf("--------------------------------------------------------------\n");
    printf("%s", ctime(&t));
    printf("--------------------------------------------------------------\n");
}

void banner_grazie(void) {
    int i;
    system("cls");
    for (i = 0; i < 5; i++) {
        printf("Grazie di aver utilizzato il programma\n");
        sleep(1);
    }
}
