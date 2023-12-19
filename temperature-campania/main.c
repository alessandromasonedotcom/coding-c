// Traccia: Gestione delle Temperature delle Città della Campania

#include <stdio.h>
#include <stdlib.h>

enum Citta { Napoli = 1, Avellino, Benevento, Salerno, Caserta };

int main() {
    // Dichiarazione delle variabili
    float temperature[5] = { 0 }; // Array per memorizzare le temperature di Napoli, Avellino, Benevento, Salerno, Caserta
    float media = 0.0; // Variabile per memorizzare la media delle temperature
    int numTemperatureValide = 0; // Contatore per tenere traccia delle temperature valide (comprese tra 0 e 25)

    do {
        system("cls");
        printf("1. Campania\n");
        printf("2. Conferma e visualizza risultati\n");
        printf("3. Esci\n");
        printf("Inserire una preferenza: ");
        
        int scelta;
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                system("cls");
                printf("1. Napoli\t[%.2f C]\n", temperature[Napoli - 1]);
                printf("2. Avellino\t[%.2f C]\n", temperature[Avellino - 1]);
                printf("3. Benevento\t[%.2f C]\n", temperature[Benevento - 1]);
                printf("4. Salerno\t[%.2f C]\n", temperature[Salerno - 1]);
                printf("5. Caserta\t[%.2f C]\n", temperature[Caserta - 1]);
                printf("6. Indietro\n");

                printf("Inserire una preferenza: ");
                int sceltaCitta;
                scanf("%d", &sceltaCitta);

                if (sceltaCitta >= Napoli && sceltaCitta <= Caserta) {
                    int indiceCitta = sceltaCitta - 1;

                    printf("Inserire temperatura: ");
                    scanf("%f", &temperature[indiceCitta]);

                    if (temperature[indiceCitta] >= 0 && temperature[indiceCitta] <= 25) {
                        numTemperatureValide++;
                    }
                }
                else if (sceltaCitta == 6) {
                    // Torna al menu precedente
                }
                else {
                    printf("Scelta non valida.\n");
                }

                break;
            
            case 2:
                system("cls");

                printf("Temperature delle città con valori fuori dall'intervallo [0, 25]:\n");
                for (int i = 0; i < 5; i++) {
                    if (temperature[i] < 0 || temperature[i] > 25) {
                        printf("%d. [%.2f C]\n", i + 1, temperature[i]);
                    }
                }

                if (numTemperatureValide > 0) {
                    media = 0.0;
                    for (int i = 0; i < 5; i++) {
                        media += temperature[i];
                    }
                    media /= numTemperatureValide;
                    printf("\nLa media delle temperature è: %.2f\n", media);
                }
                else {
                    printf("\nNessuna temperatura valida inserita.\n");
                }

                break;

            case 3:
                exit(EXIT_SUCCESS);
                break;

            default:
                printf("Scelta non valida.\n");
                break;
        }
    } while (1);

    return 0;
}
