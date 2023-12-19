// L'impiccato è un gioco di carta e matita per due giocatori. Uno dei giocatori sceglie segretamente una parola; l'altro deve indovinarla.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>

#define PAROLE_NEL_VOCABOLARIO 10
//Author: Masone Alessandro
void banner_menu_home();
void banner_menu_play();
void errore_0 ();
void errore_1 ();
void errore_2 ();
void errore_3 ();
void errore_4 ();
void errore_5 ();
void errore_6 ();
void errore_7 ();
void banner_time();
void banner_regole();
void banner_fireworks_1 ();
void banner_fireworks_2 ();
int main(int argc, char *argv[]){
 //sezione dichiarativa
 char dizionario[PAROLE_NEL_VOCABOLARIO][256]={{"bruco"}, {"fotocopia"}, {"virus"}, {"yogurt"}, {"diretta"}, {"bot"}, {"pagliaio"}, {"agosto"}, {"claustrofobia"}, {"gru"}};
 char suggerimento_dizionario[10][256]={{"Lo e' prima di diventare una farfalla"}, {"Una copia attraverso la scannerizzazione dell'immagine"}, {"un'entita' biologica con caratteristiche di parassita obbligato"}, {"E' un alimento frutto della fermentazione del latte operata da batteri"}, {"Una risposta mirata"}, {"Unione di python e telegram"}, {"l'ago finisce sempre al suo interno"}, {"L'ottavo mese dell'anno"}, {"Fobia dei piccoli spazio"}, {"E' sia un animale che uno stumento per edilizia"}};
 char parola_da_indovinare[256];
 char parola_o_lettera_inserita[256];
 char suggerimento[2560];
 char temp[256];
 int i;
 int lettera_presente;
 int errore=0;
 int parola_indovinata;
 char menu;
 int numero_casuale;
 int start=0;
 //primo menu
 do{
  //visualizza primo menu con scelta
  banner_menu_home();
  menu=getch();
  switch(menu){
   case '1': //scelta avvio gioco
    //scelta del secondo menu
    do{
     //visualizza menu di modalità di gioco con scelta
     start=0;
     banner_menu_play();
     menu=getch();
     switch(menu){
      case '1': //gioca con un amico
       //sezione di input della parola da indovinare e del suggerimento
       do{
        system("cls");
        printf("Inserire la parola da indovinare\n[!]Minimo 3 lettere\n>");
        fflush(stdin);
        gets(parola_da_indovinare);
       }while(strlen(parola_da_indovinare)<3);
       printf("Inserire il suggerimento per indovinare la parola ");
       puts(parola_da_indovinare);
       printf(">");
       fflush(stdin);
       gets(suggerimento);
       start=1;
       menu='1';
       break;
      case '2': //gioca da solo
       //assegnanzioni parole casuali da un vacabolario
       numero_casuale=rand()%PAROLE_NEL_VOCABOLARIO;
       strcpy(parola_da_indovinare, dizionario[numero_casuale]);
       strcpy(suggerimento, suggerimento_dizionario[numero_casuale]);
       start=1;
       menu='1';
       break;
      case '3': //menu precedente
       menu='1';
       break;
      default: //tasto non presente
       menu='0';
       break;
     }
    }while(menu=='0');
    if (start==1){ //se è stata scelta una modalità di gioco
     errore=0;
     //creazione della parola con iniziali e trattini da far visualizzare al gicoatore
     char parola_al_momento[strlen(parola_da_indovinare)];
     for (i=0;i<strlen(parola_da_indovinare);i++){
      if(parola_da_indovinare[i]==' '){
       parola_al_momento[i-1]=parola_da_indovinare[i-1];
       parola_al_momento[i]=' ';
       parola_al_momento[i+1]=parola_da_indovinare[i+1];
       i++;
      }
      else
       parola_al_momento[i]='_';
      }
     parola_al_momento[0]=parola_da_indovinare[0];
     parola_al_momento[strlen(parola_da_indovinare)]=parola_da_indovinare[strlen(parola_da_indovinare)];
     parola_al_momento[strlen(parola_da_indovinare)-1]=parola_da_indovinare[strlen(parola_da_indovinare)-1];
     //visualizza a video diagramma dell'impiccato
     do{
      system("cls");
      switch(errore){
       case 0:
        errore_0();
        break;
       case 1:
        errore_1();
        break;
       case 2:
        errore_2();
        break;
       case 3:
        errore_3();
        break;
       case 4:
        errore_4();
        break;
       case 5:
        errore_5();
        break;
       case 6:
        errore_6();
        break;
      }
      //visualizza a video lo status della parola e richiesta di un input parola/lettera
      printf("Parola\n>");
      puts(parola_al_momento);
      printf("Suggerimento per scovare la parola\n>");
      puts(suggerimento);
      printf("Inserisci una lettera che possa essere contenuta all'interno della parola oppure la parola stessa\n>");
      fflush(stdin);
      gets(parola_o_lettera_inserita);
      //verifca congruenza della parola o presenza della lettera
      strlwr(parola_o_lettera_inserita);
      strcpy(temp, parola_da_indovinare);
      strlwr(temp);
      if (strlen(parola_o_lettera_inserita)>1){ //se è una parola
       parola_indovinata=-1;
       parola_indovinata=strcmp(temp, parola_o_lettera_inserita);
       if(parola_indovinata!=0)
        errore++;
      }
      else{ //se è una lettera
       i=0;
       do{ //verifica presenza della lettera
        if (parola_o_lettera_inserita[0]==temp[i])
         lettera_presente=1;
        else
         lettera_presente=0;
        i++;
       }while(lettera_presente!=1 && i<strlen(parola_da_indovinare));
       if(lettera_presente==0) //se non è presente
        errore++;
       else{ //se è presente la aggiunge al nuovo status della parola
        for (i=0;i<strlen(parola_da_indovinare);i++){
         switch(parola_o_lettera_inserita[0]){
          case 'a':     
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'b':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'c':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'd':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'e':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'f':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'g':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'h':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'i':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'j':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'k':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'l':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'm':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'n':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'o':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'p':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'q':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'r':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 's':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 't':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'u':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'v':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'w':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'x':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'y':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          case 'z':
           for (i=0;i<strlen(parola_da_indovinare);i++)
            if (parola_o_lettera_inserita[0]==temp[i])
             parola_al_momento[i]=parola_da_indovinare[i];
           break;
          default:
           break;
         }
        }
       }
       //verifica se la parola è stata completata
       parola_indovinata=-1;
       parola_indovinata=strcmp(parola_al_momento, parola_da_indovinare);
      }
      if(errore==7){ //se sono stati commessi 7 errori
       system("cls");
       errore_7();
       printf("In memoria del nostro omino. Riposa in pace\n");
       banner_time();
       printf("La parola da indovinare era: ");
       puts(parola_da_indovinare);
       printf("Premi un tasto per tornare al menu");    
       getch();
      }
      else if (parola_indovinata==0){ //se la parola è stata indovinata  
       for (i=0;i<6;i++){
        system("cls");
        banner_fireworks_1();
        printf("L'omino ti ringrazia per non averlo ucciso\n");  
        Sleep(200);
        system("cls");
        banner_fireworks_2();
        printf("L'omino ti ringrazia per non averlo ucciso\n");
        Sleep(200); 
       }
       printf("Premi un tasto per tornare al menu");
       getch(); 
      } 
     }while(errore<7 && parola_indovinata!=0);
    }
    menu='0';
    break;
   case '2': //visualizzazione delle regole
    banner_regole();
    getch();
    menu='0';
    break;
   case '3': //uscita
    system("cls");
    for (i=0;i<5;i++){
     printf("Grazie di aver utilizzato il programma\n\n");
     sleep(1);
    } 
    menu='1';
    break;
   default:
    menu='0';
    break;
  }
 }while(menu=='0'); 
 system("PAUSE");
 return 0;
}
void banner_menu_home (void){
 system("cls");
 printf("1. Play game\n");
 printf("2. How to play\n");
 printf("3. Esci\n");
}
void banner_menu_play (void){
 system("cls");
 printf("1. Play with a friend\n");
 printf("2. Play without a friend\n");
 printf("3. Bach to menu"); 
}
void banner_time (void) {
    time_t t;
    time(&t);
 printf("%s", ctime(&t));
}
void banner_regole (void){
 system("cls");
 printf("REGOLE\n\n");
 printf("|L'impiccato \x82 un gioco di carta e matita per due giocatori.\n");
 printf("|Uno dei giocatori sceglie segretamente una parola, l'altro deve indovinarla.\n");
 printf("|Il giocatore che sceglie la parola disegna una riga tratteggiata,\n");
 printf("|con un tratto per ogni lettera della parola.\n");
 printf("|L'altro tenta di indovinare la parola dichiarando una lettera a ogni turno.\n");
 printf("|Se la lettera compare nella parola, il giocatore che ha scelto la parola\n");
 printf("|trascrive la lettera su tutti i trattini corrispondenti.\n");
 printf("|Se la lettera non \x82 presente, il giocatore che ha scelto la parola traccia una linea del diagramma dell'impiccato.\n");
 printf("|Il gioco termina quando la parola viene indovinata, o viene completato il diagramma dell'impiccato.\n\n");
 printf("Premi un tasto per tornare al menu");
}
void errore_0 (void){
 printf(" ____________________    \n");
 printf("| .__________________|   \n");
 printf("| | / /                  \n");
 printf("| |/ /                   \n");
 printf("| | /                    \n");
 printf("| |/                     \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n");
}
void errore_1 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||          \n");
 printf("| |/         ||          \n");
 printf("| |          ||          \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n");
}
void errore_2 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c    \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n");
}
void errore_3 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c     \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |         Y     Y      \n");
 printf("| |          |   |       \n");
 printf("| |          |   |       \n");
 printf("| |          | _ |       \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n");
}
void errore_4 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c     \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |        /Y     Y      \n");
 printf("| |       // |   |       \n");
 printf("| |      //  |   |       \n");
 printf("| |     ')   | _ |       \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n"); 
}
void errore_5 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c     \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |        /Y     Y\x5c     \n");
 printf("| |       // |   | \\    \n");
 printf("| |      //  |   |  \\   \n");
 printf("| |     ')   | _ |   (`  \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |                      \n");
 printf("| |?????????????????????|\n");
 printf("| |???????????????????| |\n");
 printf("| |                   | |\n");
 printf(": :                   : :\n");
 printf(". .                   . .\n");
}
void errore_6 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c     \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |        /Y     Y\x5c     \n");
 printf("| |       // |   | \\    \n");
 printf("| |      //  |   |  \\   \n");
 printf("| |     ')   | _ |   (`  \n");
 printf("| |          ||          \n");
 printf("| |          ||          \n");
 printf("| |          ||          \n");
 printf("| |          ||          \n");
 printf("| |         / |          \n");
 printf("| |???????|_`-'     |???|\n");
 printf("| |???????\x5c \x5c       ??| |\n");
 printf("| |        \x5c \x5c        | |\n");
 printf(": :         \x5c \x5c       : :\n");
 printf(". .          `'       . .\n");
}
void errore_7 (void){
 printf(" ___________.._______    \n");
 printf("| .__________))______|   \n");
 printf("| | / /      ||          \n");
 printf("| |/ /       ||          \n");
 printf("| | /        ||.-''.     \n");
 printf("| |/         |/  _  \x5c     \n");
 printf("| |          ||  `/,|    \n");
 printf("| |          (\\`_.'     \n");
 printf("| |         .-`--'.      \n");
 printf("| |        /Y     Y\x5c     \n");
 printf("| |       // |   | \\    \n");
 printf("| |      //  |   |  \\   \n");
 printf("| |     ')   | _ |   (`  \n");
 printf("| |          || ||       \n");
 printf("| |          || ||       \n");
 printf("| |          || ||       \t\t    _____\n");
 printf("| |          || ||       \t\t  /~/~   ~\x5c\n");
 printf("| |         / | | \x5c      \t\t | |       \x5c\n");
 printf("| |???????|_`-' `-' |???|\t\t \x5c \x5c        \x5c\n");
 printf("| |???????\x5c \x5c       ??| |\t\t  \x5c \x5c        \x5c\n");
 printf("| |        \x5c \x5c        | |\t\t --\x5c \x5c       .\x5c\x27\x27\n");
 printf(": :         \x5c \x5c       : :\t\t--==\x5c \x5c     ,,i!!i,\n");
 printf(". .          `'       . .\t\t\x27\x27\x22\x27\x27\x2c\x2c\x7d\x7b\x2c\x2c\n");
}
void banner_fireworks_1 (void){
 printf("\n                       (     \n");
 printf("      __________       )\x5c    \n");
 printf("     /         /\x5c______\x7b\x2c\x7d   \n");
 printf("     \x5c_________\x5c/            \n\n\n\n"); 
}
void banner_fireworks_2 (void){
 printf("\n                     . : .       \n");
 printf("      __________    '.  :  .'    \n");
 printf("     /         /\x5c__.__'.:.'  .   \n");
 printf("     \x5c_________\x5c/  .  .':'.  .   \n");
 printf("                    .'  :  '.    \n");
 printf("                      ' : '      \n\n");
}