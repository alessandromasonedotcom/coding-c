#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    enum nomi  // Inizio sezione enumerazione
    {
        wendy = 1,
        crystal,
        marla,
        myrtle,
        janet,
        stephanie,
        thomas,
        krystal,
        james,
        joseph,
        katrina,
        harold,
        laverne,
        ashley,
        lisa,
        phillip,
        jonny,
        sarah
    };

    int a;  // Dichiarazione variabili

    system("color 6");  // Giusto per dare un po' di colore
    printf(
        "inserisci un numero compreso tra 1 e 18:\n");  // Messaggio indicazioni
                                                        // a video
    scanf("%d", &a);  // Presa in in-put del valore

    switch (a)  // swich per a
    {
        case wendy:  // Controlla il numero inserito in a
            printf("Wendy W. Schofield\n");  // Messaggio a video
            break;  // Causa l'uscita immediata dallo switch
        case crystal:
            printf("Crystal L. Klingbeil\n");
            break;
        case marla:
            printf("Marla S. Brink\n");
            break;
        case myrtle:
            printf("Myrtle D. Lady\n");
            break;
        case janet:
            printf("Janet A. Brooks\n");
            break;
        case stephanie:
            printf("Stephanie R. Coleman\n");
            break;
        case thomas:
            printf("Thomas M. Lyons\n");
            break;
        case krystal:
            printf("Krystal D. Lynch\n");
            break;
        case james:
            printf("James C. Taylor\n");
            break;
        case joseph:
            printf("Joseph J. Allen\n");
            break;
        case katrina:
            printf("Katrina R. Brockman\n");
            break;
        case harold:
            printf("Harold N. Palomino\n");
            break;
        case laverne:
            printf("Laverne D. Leone\n");
            break;
        case ashley:
            printf("Ashley M. Blakeney\n");
            break;
        case lisa:
            printf("Lisa M. Scott\n");
            break;
        case phillip:
            printf("Phillip J. Weeks\n");
            break;
        case jonny:
            printf("Johnny L. Gee\n");
            break;
        case sarah:
            printf("Sarah J. Steiner\n");
            break;
        default:
            printf("numero non compreso sarai piu' fortunato\n");
            break;
    }

    system("PAUSE");
    return 0;
}