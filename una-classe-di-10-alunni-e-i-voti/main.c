// Traccia: Una classe di 10 alunni e i voti
//
// Scrivi un programma che gestisce i voti di una classe di 10 alunni. Il programma deve svolgere le seguenti operazioni:
//
// 1. Chiedere all'utente quanti voti ha ogni alunno;
// 2. Far inserire i voti all'utente per ciascun alunno;
// 3. Calcolare la media dei voti di ciascun alunno;
// 4. Contare quante insufficienze ha ciascun alunno (voti inferiori a 6);
// 5. Alla fine di tutte le operazioni, mostrare il numero totale di voti insufficienti nella classe e quanti alunni hanno una media inferiore a 6.

#include <stdio.h> // Libreria per l'input e l'output standard
#include <stdlib.h> // Libreria per l'utilizzo della funzione system

#define NUMERO_ALUNNI 10 // Costante per il numero di alunni

int main() { // Corpo del programma
    int numero_di_voti_da_inserire = 0, insufficienze_alunno = 0, alunni_con_media_insufficiente = 0, insufficienze_totale = 0; // Dichiarazione variabili
    float voto = 0, media = 0; // Dichiarazione variabile

    for (int a = 0; a < NUMERO_ALUNNI; a++) { // Ciclo per gestire ciascun alunno
        do {
            printf("\nInserire il numero di voti dell'alunno %i: ", a + 1); // Richiesta del numero di voti dell'alunno
            scanf("%i", &numero_di_voti_da_inserire); // Lettura del numero di voti
        } while (numero_di_voti_da_inserire < 0); // Controllo dell'input per assicurarsi che sia positivo

        media = 0; // Inizializzazione della media a 0 per ciascun alunno
        insufficienze_alunno = 0; // Inizializzazione delle insufficienze a 0 per ciascun alunno

        for (int b = 0; b < numero_di_voti_da_inserire; b++) { // Ciclo per inserire i voti dell'alunno
            do {
                printf("Inserire il voto n.%i dell'alunno %i: ", b + 1, a + 1); // Richiesta del voto
                scanf("%f", &voto); // Lettura del voto
            } while (voto < 0); // Controllo dell'input per assicurarsi che sia positivo

            media += voto; // Aggiunta del voto alla media dell'alunno

            if (voto < 6) { // Conteggio delle insufficienze
                insufficienze_alunno++;
            }
        }

        media /= numero_di_voti_da_inserire; // Calcolo della media dei voti dell'alunno

        printf("Insufficienze dell'alunno %i: %i", a + 1, insufficienze_alunno); // Stampa delle insufficienze dell'alunno
        printf("\nMedia dell'alunno %i: %.2f\n", a + 1, media); // Stampa della media dell'alunno

        if (media < 6) { // Conteggio degli alunni con media insufficiente
            alunni_con_media_insufficiente++;
        }

        insufficienze_totale += insufficienze_alunno; // Aggiunta delle insufficienze dell'alunno alle insufficienze totali
    }

    printf("\nVoti insufficienti totali: %i", insufficienze_totale); // Stampa del numero totale di voti insufficienti nella classe
    printf("\nAlunni con media inferiore a 6: %i\n", alunni_con_media_insufficiente); // Stampa del numero di alunni con media inferiore a 6

    system("pause"); // Pausa per visualizzare l'output
    return 0; // Indica che il programma è terminato con successo
}
