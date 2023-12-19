// Traccia: Numeri maggiori e minori di X - Confronto tra Valori

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, val, n_val, minori = 0, maggiori = 0;

    // Lettura di "n" e "val" da tastiera
    printf("Inserisci il valore di val: ");
    scanf("%d", &val);

    printf("Inserisci il numero di valori che desideri inserire (n): ");
    scanf("%d", &n);

    // Ciclo per confrontare i valori inseriti con "val"
    for (i = 0; i < n; i++) {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &n_val);

        if (n_val > val) {
            maggiori++;
        } else if (n_val < val) {
            minori++;
        }
    }

    // Visualizzazione a video dei risultati
    printf("\nNumero di valori maggiori di val: %d\n", maggiori);
    printf("Numero di valori minori di val: %d\n", minori);

    system("pause");
    return 0;
}
