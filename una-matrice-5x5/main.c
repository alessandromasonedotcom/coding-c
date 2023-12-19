// Traccia: Matrice 5x5 di punti realizzati dai giocatori di basket

// Una matrice 5x5 rappresenta il numero di punti realizzati da dei giocatori di basket in un piccolo torneo: 
// in ogni riga c’è il totale dei punti realizzati da un giocatore in ogni partita; 
// in ogni colonna ci sono i punti realizzati dai giocatori in una specifica partita.

// Obiettivi:
// - Stampare a video la matrice;
// - Scrivere quanti zeri sono memorizzati nella matrice e in quale posizione;
// - Stampare il numero di punti realizzati nella partita in cui sono stati fatti più punti dal giocatore 
//   che nel totale delle partite ha realizzato più punti.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIGHE 5
#define COLONNE 5
#define PUNTI_MASSIMI_NBA 101

int main(int argc, char *argv[]) {
    int i, j, k, y;
    int temp = 0, temp2, riga_massima, colonna_massima, menu;
    int a[RIGHE][COLONNE];
    int b[COLONNE];
    int somma_riga[RIGHE] = {0};
    srand(time(NULL));

    // Menu per la scelta tra generazione casuale o inserimento manuale
    do {
        system("cls");
        printf("1. Inserimento Casuale\n2. Inserimento Manuale\n3. Esci\nInserire la preferenza\n>");
        fflush(stdin);
        menu = getch();
        system("cls");

        switch (menu) {
            case '1': // Scelta della generazione casuale
                // Generazione casuale di numeri tutti diversi
                for (k = 0; k < RIGHE; k++) {
                    for (i = 0; i < COLONNE; i++) {
                        b[i] = rand() % PUNTI_MASSIMI_NBA;
                        for (j = 0; j < i; j++) {
                            if (b[i] == b[j]) {
                                i--;
                                break;
                            }
                        }
                    }
                    // Assegnazione numeri casuali alla riga della tabella
                    for (y = 0; y < COLONNE; y++) {
                        a[k][y] = b[y];
                    }
                    // Somma della riga
                    for (y = 0; y < COLONNE; y++) {
                        somma_riga[k] += a[k][y];
                    }
                    // Controllo della presenza di un'altra riga con la stessa somma
                    for (i = 0; i < k; i++) {
                        for (y = 0; y < i; y++) {
                            if (somma_riga[i] == somma_riga[y]) {
                                k--;
                                break;
                            }
                        }
                    }
                }
                // Visualizzazione della tabella
                printf("\xda\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xbf\n");
                printf("\xb3  x  \xb3  1  \xb3  2  \xb3  3  \xb3  4  \xb3  5  \xb3\n");
                printf("\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                for (k = 0; k < RIGHE; k++) {
                    printf("\xb3  %d  \xb3", k + 1);
                    for (y = 0; y < COLONNE; y++) {
                        if (a[k][y] < 10)
                            printf("  %d  \xb3", a[k][y]);
                        else if (a[k][y] < 100)
                            printf(" %d  \xb3", a[k][y]);
                        else
                            printf(" %d \xb3", a[k][y]);
                    }
                    if (k != 4)
                        printf("\n\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                    else
                        printf("\n\xc0\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xd9\n");
                }

                // Ricerca del punteggio richiesto dalla traccia
                for (i = 0; i < RIGHE; i++) {
                    temp = 0;
                    for (j = 0; j < COLONNE; j++) {
                        temp += a[i][j];
                    }
                    if (i == 0) {
                        riga_massima = i;
                        temp2 = temp;
                    } else if (temp > temp2) {
                        temp2 = temp;
                        riga_massima = i;
                    }
                }
                for (j = 0; j < COLONNE; j++) {
                    if (j == 0) {
                        colonna_massima = j;
                        temp = a[riga_massima][j];
                    } else if (temp < a[riga_massima][j]) {
                        colonna_massima = j;
                        temp = a[riga_massima][j];
                    }
                }

                // Visualizzazione del valore richiesto dalla traccia
                printf("\nPunto piu alto realizzato nelle partite giocate dal giocatore con il maggiore punteggio totale\n\n");
                printf("\xda\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xbf\n");
                printf("\xb3  x  \xb3  %d  \xb3\n", colonna_massima + 1);
                printf("\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                printf("\xb3  %d  \xb3", riga_massima + 1);
                if (a[riga_massima][colonna_massima] < 10)
                    printf("  %d  \xb3", a[riga_massima][colonna_massima]);
                else if (a[riga_massima][colonna_massima] < 100)
                    printf(" %d  \xb3", a[riga_massima][colonna_massima]);
                else
                    printf(" %d \xb3", a[riga_massima][colonna_massima]);
                printf("\n\xc0\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xd9\n");
                printf("\nPreme un tasto per tornare al menu");
                getch();
                break;
            case '2': // Scelta dell'inserimento manuale
                // Rimpimento con tutti zeri della tabella
                for (i = 0; i < RIGHE; i++) {
                    for (j = 0; j < COLONNE; j++) {
                        a[i][j] = 0;
                    }
                }
                // Visualizzazione della tabella
                for (i = 0; i < RIGHE; i++) {
                    for (j = 0; j < COLONNE; j++) {
                        system("cls");
                        printf("\xda\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xbf\n");
                        printf("\xb3  x  \xb3  1  \xb3  2  \xb3  3  \xb3  4  \xb3  5  \xb3\n");
                        printf("\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                        for (k = 0; k < RIGHE; k++) {
                            printf("\xb3  %d  \xb3", k + 1);
                            for (y = 0; y < COLONNE; y++) {
                                if (a[k][y] < 10)
                                    printf("  %d  \xb3", a[k][y]);
                                else if (a[k][y] < 100)
                                    printf(" %d  \xb3", a[k][y]);
                                else
                                    printf(" %d \xb3", a[k][y]);
                            }
                            if (k != 4)
                                printf("\n\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                            else
                                printf("\n\xc0\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xd9\n");
                        }
                        // Sezione dell'input del punteggio
                        printf("Inserire il punteggio (%d,%d) e premere ENTER\n>", i + 1, j + 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                // Ricerca del punteggio richiesto dalla traccia
                for (i = 0; i < RIGHE; i++) {
                    temp = 0;
                    for (j = 0; j < COLONNE; j++) {
                        temp += a[i][j];
                    }
                    if (i == 0) {
                        riga_massima = i;
                        temp2 = temp;
                    } else if (temp > temp2) {
                        temp2 = temp;
                        riga_massima = i;
                    }
                }
                for (j = 0; j < COLONNE; j++) {
                    if (j == 0) {
                        colonna_massima = j;
                        temp = a[riga_massima][j];
                    } else if (temp < a[riga_massima][j]) {
                        colonna_massima = j;
                        temp = a[riga_massima][j];
                    }
                }

                // Visualizzazione a video della tabella finale
                system("cls");
                printf("\xda\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xbf\n");
                printf("\xb3  x  \xb3  1  \xb3  2  \xb3  3  \xb3  4  \xb3  5  \xb3\n");
                printf("\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                for (k = 0; k < RIGHE; k++) {
                    printf("\xb3  %d  \xb3", k + 1);
                    for (y = 0; y < COLONNE; y++) {
                        if (a[k][y] < 10)
                            printf("  %d  \xb3", a[k][y]);
                        else if (a[k][y] < 100)
                            printf(" %d  \xb3", a[k][y]);
                        else
                            printf(" %d \xb3", a[k][y]);
                    }
                    if (k != 4)
                        printf("\n\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                    else
                        printf("\n\xc0\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xd9\n");
                }

                // Visualizzazione del punteggio richiesto dalla traccia
                printf("\nPunto piu alto realizzato nelle partite giocate dal giocatore con il maggiore punteggio totale\n\n");
                printf("\xda\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xbf\n");
                printf("\xb3  x  \xb3  %d  \xb3\n", colonna_massima + 1);
                printf("\xc3\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xb4\n");
                printf("\xb3  %d  \xb3", riga_massima + 1);
                if (a[riga_massima][colonna_massima] < 10)
                    printf("  %d  \xb3", a[riga_massima][colonna_massima]);
                else if (a[riga_massima][colonna_massima] < 100)
                    printf(" %d  \xb3", a[riga_massima][colonna_massima]);
                else
                    printf(" %d \xb3", a[riga_massima][colonna_massima]);
                printf("\n\xc0\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xd9\n");
                printf("\nPreme un tasto per tornare al menu");
                getch();
                break;
            case '3':
                system("cls");
                for (i = 0; i < 5; i++) {
                    printf("Grazie di aver utilizzato il programma\n\nvisita la mia pagina web\n\n");
                    sleep(1);
                }
                break;
            default:
                break;
        }
    } while (menu != '3');

    return 0;
}
