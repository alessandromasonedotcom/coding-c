// Scrivere un programma in che, dopo aver letto I dati relativi a ”num” dipendenti di un azienda con “anno_nascita”:
// 1. ordina in senso crescente per anno_nascita e stampa a video;
// 2. ordina in senso decrescente per anno_nascita e stampa a video.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define LUNGHEZZA_TESTO 256
//Dichiarazione funzioni
void banner_menu();
void banner_menu_1();
void banner_menu_2();
void banner_menu_3();
void uscita_sezione_menu();
void banner_time();
//corpo del programma principale
int main(int argc, char *argv[]){
 //sezione dichiarativa
 int num, i, j, nome_piu_lungo=0, temp2;
 char menu;
 char temp [LUNGHEZZA_TESTO];
 //sezione input del numero di dipendenti
 do{
  system("cls");
  banner_time();
  printf("|Inserire il numero di dipendenti\n|>");
  scanf("%i", &num);
 }while(num<=0);
 //dichiarazione tabella
 char cognome_nome[num][LUNGHEZZA_TESTO];
 int anno_nascita[num];
 //sezione input nomi dei dipendenti
 for (i=0; i<num; i++){
 do{
  system("cls");
  banner_time();
  printf("|Inserire il dipendendente numero %i\xa7\n|>", i+1);
  fflush(stdin);
  gets(cognome_nome[i]);
  }while(strlen(cognome_nome[i])<=0); 
    }
    //sezione input della data di nascita
 for (i=0; i<num; i++){
 do{
  system("cls");
  banner_time();
  printf("|Inserire la data di nascita del dipendendete ");
  puts(cognome_nome[i]);
  printf("|>");
  scanf("%i", &anno_nascita[i]);
  }while(anno_nascita[i]<=0);
 }
 //for per determinare il nome nome più lungo
 for (i=0; i<num; i++){
  if(strlen(cognome_nome[i])>nome_piu_lungo)
   nome_piu_lungo=strlen(cognome_nome[i]);
 }
 //menu per le varie opzione
 do{
  banner_menu();
  fflush(stdin);
  menu=getch();
  switch(menu){
   case'1': //primo punto della consegna
    //messa in ordine per le darte di nascita
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      if (anno_nascita[i]>anno_nascita[j]){
       temp2=anno_nascita[i];
       strcpy(temp, cognome_nome[i]);
       anno_nascita[i]=anno_nascita[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       anno_nascita[j]=temp2;
       strcpy(cognome_nome[j], temp);
      }
     }
    }
    //sezione di output dei nomi con voti
    banner_menu_1();
    for (i=0; i<num; i++){
    printf("|   ");
    fputs(cognome_nome[i], stdout);
    for (j=strlen(cognome_nome[i]); j<nome_piu_lungo+10; j++)
     printf(" ");
    printf("%i\n", anno_nascita[i]);
   }
   uscita_sezione_menu();
    break;
   case'2': //secondo punto della consegna
    //messa in ordine per le date di nascita al contriario
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      if (anno_nascita[i]<anno_nascita[j]){
       temp2=anno_nascita[i];
       strcpy(temp, cognome_nome[i]);
       anno_nascita[i]=anno_nascita[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       anno_nascita[j]=temp2;
       strcpy(cognome_nome[j], temp);
      }
     }
    }
    //sezione di output dei nomi con voti
    banner_menu_2();
    for (i=0; i<num; i++){
    printf("|   ");
    fputs(cognome_nome[i], stdout);
    for (j=strlen(cognome_nome[i]); j<nome_piu_lungo+10; j++)
     printf(" ");
    printf("%i\n", anno_nascita[i]);
   }
   uscita_sezione_menu();
    break;
   case'3':
    banner_menu_3();
    break;
   default:
    break;
  }
 }while(menu!='3');
 return 0;
}
void banner_time (void) {
 time_t t;
 time(&t);
 printf("|----------------------------------\n");
 printf("|%s", ctime(&t));
 printf("|----------------------------------\n");
}
void uscita_sezione_menu(void){
 printf("|----------------------------------\n");
 printf("|Premi un tasto per tornare al menu\n");
 getch();
}
void banner_menu_1(void){
 system("cls");
 banner_time();
 printf("|--!Dipendente!---------!Anno!----\n");
}
void banner_menu_2(void){
 system("cls");
 banner_time();
 printf("|--!Dipendente!---------!Anno!----\n");
}
void banner_menu_3(void){
 int i;
 system("cls");
 banner_time();
 for (i=0; i<5; i++){
  printf("|Grazie di aver utilizzato il programma\n");
  sleep(1);
 }
}
void banner_menu (void){
 system("cls");
 banner_time();
 printf("|1. Ordina per data crescente\n");
 printf("|2. Ordina per data decrescente\n");
 printf("|3. Esci\n");
 printf("|Premere il tasto desiderato");
}