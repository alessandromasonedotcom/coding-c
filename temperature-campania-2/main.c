// Traccia: Temperature Campania 2
//
// Scrivere un programma in linguaggio C che permetta di registrare le temperature minime e massime
// di cinque città della provincia della Campania. Il programma dovrà richiedere all'utente di 
// inserire le temperature per ciascuna città e successivamente dovrà identificare la città con 
// la temperatura minima più bassa e quella con la temperatura massima più alta.
//
// Il programma dovrà svolgere le seguenti operazioni:

// 1. Creare una struttura chiamata "Città" per rappresentare una città con i seguenti campi:
//      - nome: una stringa per memorizzare il nome della città (max 20 caratteri);
//      - temperatura_minima: un numero decimale per memorizzare la temperatura minima registrata nella città;
//      - temperatura_massima: un numero decimale per memorizzare la temperatura massima registrata nella città.
// 2. Creare un array di strutture "Citta" per memorizzare i dati delle cinque città.
// 3. Chiedere all'utente di inserire le temperature minime e massime per ciascuna delle cinque città.
// 4. Trovare e memorizzare la città con la temperatura minima più bassa tra quelle inserite.
// 5. Trovare e memorizzare la città con la temperatura massima più alta tra quelle inserite.
// 6. Stampare a video il nome della città con la temperatura minima più bassa e il valore della sua temperatura minima registrata.
// 7. Stampare a video il nome della città con la temperatura massima più alta e il valore della sua temperatura massima registrata.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definiamo una struttura per rappresentare una città con nome, temperatura minima e temperatura massima.
struct Citta {
    char nome[20]; // Nome della città
    float temperatura_minima; // Temperatura minima registrata nella città
    float temperatura_massima; // Temperatura massima registrata nella città
};

int main() {
    // Creiamo un array di strutture per le città della Campania.
    struct Citta campania[5];

    // Popoliamo l'array con i nomi delle città.
    strcpy(campania[0].nome, "Napoli");
    strcpy(campania[1].nome, "Caserta");
    strcpy(campania[2].nome, "Avellino");
    strcpy(campania[3].nome, "Salerno");
    strcpy(campania[4].nome, "Benevento");

    // Richiediamo all'utente di inserire le temperature minime e massime per ogni città.
    for (int i = 0; i < 5; i++) {
        printf("Inserisci la temperatura minima per %s: ", campania[i].nome);
        scanf("%f", &campania[i].temperatura_minima);

        printf("Inserisci la temperatura massima per %s: ", campania[i].nome);
        scanf("%f", &campania[i].temperatura_massima);
    }

    // Troviamo la città con la temperatura minima.
    struct Citta citta_minima = campania[0];
    for (int i = 1; i < 5; i++) {
        if (campania[i].temperatura_minima < citta_minima.temperatura_minima) {
            citta_minima = campania[i];
        }
    }

    // Troviamo la città con la temperatura massima.
    struct Citta citta_massima = campania[0];
    for (int i = 1; i < 5; i++) {
        if (campania[i].temperatura_massima > citta_massima.temperatura_massima) {
            citta_massima = campania[i];
        }
    }

    // Stampiamo i risultati.
    printf("Citta piu' fredda: %s, temperatura minima: %.2f\n", citta_minima.nome, citta_minima.temperatura_minima);
    printf("Citta piu' calda: %s, temperatura massima: %.2f\n", citta_massima.nome, citta_massima.temperatura_massima);

    return 0;
}
