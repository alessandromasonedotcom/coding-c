// Traccia: 3 Rettangoli

// Traccia completa:
// Scrivere un programma in "C" che acquisisca da tastiera le lunghezze della base e dell'altezza di 3 rettangoli e restituisca a video:
// - Le lunghezze delle basi e delle altezze acquisite;
// - Le aree ed i perimetri dei 3 rettangoli;
// - Ordini in maniera decrescente le aree e i perimetri.
// (Utilizzare array per l'input e l'output)

#include <stdio.h>
#include <stdlib.h>
#define NUMERO_RETTANGOLI 3

int main() {
    // Dichiarazione variabili
    int i, j;
    int temp;
    int altezza[NUMERO_RETTANGOLI];
    int base[NUMERO_RETTANGOLI];
    int perimetro[NUMERO_RETTANGOLI];
    int area[NUMERO_RETTANGOLI];

    // Acquisizione delle lunghezze delle basi e delle altezze dei rettangoli da tastiera
    for (i = 0; i < NUMERO_RETTANGOLI; i++) {
        printf("Inserire l'altezza del rettangolo numero %d: ", i + 1);
        scanf("%d", &altezza[i]);
        
        do {
            printf("[!] Inserire una base diversa dall'altezza: ");
            scanf("%d", &base[i]);
        } while (base[i] == altezza[i]);
    }

    // Calcolo dei perimetri
    for (i = 0; i < NUMERO_RETTANGOLI; i++) {
        perimetro[i] = (altezza[i] + base[i]) * 2;
    }

    // Calcolo delle aree
    for (i = 0; i < NUMERO_RETTANGOLI; i++) {
        area[i] = altezza[i] * base[i];
    }

    // Ordinamento decrescente di aree e perimetri
    for (i = 0; i < NUMERO_RETTANGOLI - 1; i++) {
        for (j = i + 1; j < NUMERO_RETTANGOLI; j++) {
            if (area[j] > area[i]) {
                temp = area[i];
                area[i] = area[j];
                area[j] = temp;

                temp = perimetro[i];
                perimetro[i] = perimetro[j];
                perimetro[j] = temp;

                temp = altezza[i];
                altezza[i] = altezza[j];
                altezza[j] = temp;

                temp = base[i];
                base[i] = base[j];
                base[j] = temp;
            }
        }
    }

    // Output
    printf("\nLunghezze delle basi e delle altezze acquisite:\n");
    for (i = 0; i < NUMERO_RETTANGOLI; i++) {
        printf("Rettangolo %d: Base = %d, Altezza = %d\n", i + 1, base[i], altezza[i]);
    }

    printf("\nAree ed I perimetri dei 3 rettangoli:\n");
    for (i = 0; i < NUMERO_RETTANGOLI; i++) {
        printf("Rettangolo %d: Area = %d, Perimetro = %d\n", i + 1, area[i], perimetro[i]);
    }

    return 0;
}
