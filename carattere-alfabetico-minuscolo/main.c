// Traccia: Dato un carattere alfabetico minuscolo in ingresso, scrivere una funzione che restituisca il corrispondente carattere maiuscolo

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void traccia(void);
char carattereup(char);
char input(void);
// corpo principale del programma dopo richiamo le varie funzioni
int main(int argc, char const *argv[])
{
    char x;
    do
    {
        traccia();
        x = input();
        if (x != 48)
        {
            x = carattereup(x);
            printf("%c\n", x);
        }
    } while (x != 48);
    return 0;
}
// visualizza a video le istruzioni per l'utente
void traccia(void)
{
    printf("Premere una lettera minuscola dell'alfabeto e otterrai la magia, la miagia si fermera' con l'inserimento del valore 0\n");
}
// funzione dove modifico il carattere inserito in maiuscolo
char carattereup(char x)
{
    char a;
    a = toupper(x);
    return a;
}
// funzione dove effettuo il controllo dell'input per solo lettere dell'alfabeto e il valore 0 o per uscire dal programma
char input(void)
{
    char carattere;
    int i,
        errore = 1;
    do
    {
        carattere = getch();
        for (i = 97; i < 123; i++) // controllo per lettere solo minuscole e dell'alfabeto
        {
            if (carattere == i || carattere == 48)
            {
                errore = 0;
                if (carattere != 48) // carattere dal processare
                {
                    system("cls");
                    printf("Ecco a te la magia\n%c --to--> ", carattere);
                }
                else
                {
                    system("cls");
                    for (i = 0; i < 10; i++) // carattere per uscita
                    {
                        printf("Spam di amazon prime!!!\n");
                    }
                    printf("Premere un tasto per chiudere");
                    getch();
                    exit(0);
                }
            }
        }
    } while (errore == 1);
}