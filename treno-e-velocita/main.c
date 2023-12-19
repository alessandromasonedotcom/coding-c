// Traccia: Calcolo del Tempo Impiegato da un Treno a una Velocità di 120 km/h

#include <stdio.h>

#define VELOCITA 120

int main() {
    // Dichiarazione delle variabili
    float distanza;
    int distanza_int;
    float ore_float;
    float ore_float_parte_decimale;
    int ore;
    float minuti_float;
    float minuti_float_parte_decimale;
    int minuti;
    float secondi_float;
    int secondi;

    // Input: richiesta della distanza in km
    printf("Inserisci la distanza espressa in km: ");
    scanf("%f", &distanza);

    // Intero per la distanza
    distanza_int = (int)distanza;

    // Calcolo del tempo in ore
    ore_float = distanza / VELOCITA;
    ore = (int)ore_float;
    ore_float_parte_decimale = ore_float - ore;

    // Calcolo dei minuti
    minuti_float = ore_float_parte_decimale * 60;
    minuti = (int)minuti_float;
    minuti_float_parte_decimale = minuti_float - minuti;

    // Calcolo dei secondi
    secondi_float = minuti_float_parte_decimale * 60;
    secondi = (int)secondi_float;

    // Output: visualizzazione del tempo impiegato
    printf("Tempo impiegato dal treno: %dh %02d' %02d''\n", ore, minuti, secondi);

    return 0; // Indica che il programma è terminato correttamente.
}
