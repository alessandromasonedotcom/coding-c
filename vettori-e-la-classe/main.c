#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LUNGHEZZA_TESTO 256
//Dichiarazione funzioni
void banner_menu();
void banner_menu_1();
void banner_menu_2();
void banner_menu_3();
void banner_menu_4();
void banner_menu_5();
void banner_menu_6();
void banner_menu_7();
void uscita_sezione_menu();
void banner_time();
//corpo del programma principale
int main(int argc, char *argv[]){
 //sezione dichiarativa
 int i, j;
 int num, menu, nome_piu_lungo=0;
 float media;
 char temp[LUNGHEZZA_TESTO], temp3[LUNGHEZZA_TESTO], temp4[LUNGHEZZA_TESTO];
 int temp2;
 //sezione input del numero di alunni
 do{
  system("cls");
  banner_time();
  printf("|Inserire il numero di alunni\n|>");
  scanf("%i", &num);
 }while(num<=0);
 //dichiarazione tabella
 char cognome_nome[num][LUNGHEZZA_TESTO];
 float voto_informatica[num];
 //sezione input dei nomi 
 system("cls");
 for (i=0; i<num; i++){
 do{
   system("cls");
   banner_time();
   printf("|Inserire il primo alunno %i\xa7\n|>", i+1);
   fflush(stdin);
   gets(cognome_nome[i]);
  }while(strlen(cognome_nome[i])<=0);
    }
    //sezione input dei voti
 for (i=0; i<num; i++){
  do{
  system("cls");
  banner_time();
  printf("|Inserire il voto dell'alunno ");
  puts(cognome_nome[i]);
  printf("|>");
  scanf("%f", &voto_informatica[i]);
  }while(voto_informatica[i]<=0);
 }
 //for per determinare il nome nome piï¿½ lungo
 for (i=0; i<num; i++){
  if(strlen(cognome_nome[i])>nome_piu_lungo)
   nome_piu_lungo=strlen(cognome_nome[i]);
 }
 //menu per le varie opzione
 do{
  //input della scelta
  banner_menu();
  fflush(stdin);
  menu=getch();
  switch(menu){
   case'1': //primo punto della consegna
    //messa in ordine dei nomi 
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      strcpy(temp3, cognome_nome[i]);
      strcpy(temp4, cognome_nome[j]);
      if (strcmp(strlwr(temp3), strlwr(temp4))>0){
       temp2=voto_informatica[i];
       strcpy(temp, cognome_nome[i]);
       voto_informatica[i]=voto_informatica[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       voto_informatica[j]=temp2;
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
      printf("%.2f\n", voto_informatica[i]);
    }
    uscita_sezione_menu();
    break;
   case'2': //secondo punto della consegna
    //messa in ordine dei nomi al contrario
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      strcpy(temp3, cognome_nome[i]);
      strcpy(temp4, cognome_nome[j]);
      if (strcmp(strlwr(temp3), strlwr(temp4))<0){
       temp2=voto_informatica[i];
       strcpy(temp, cognome_nome[i]);
       voto_informatica[i]=voto_informatica[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       voto_informatica[j]=temp2;
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
     printf("%.2f\n", voto_informatica[i]);
    }
       uscita_sezione_menu();
    break;
   case'3': //terzo punto della consegna
    //messa in ordine dei nomi secondo le valutazioni 
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      if (voto_informatica[i]>voto_informatica[j]){
       temp2=voto_informatica[i];
       strcpy(temp, cognome_nome[i]);
       voto_informatica[i]=voto_informatica[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       voto_informatica[j]=temp2;
       strcpy(cognome_nome[j], temp);
      }
     }
    }
    //sezione di output dei nomi con voti
    banner_menu_3();
    for (i=0; i<num; i++){
     printf("|   ");
     fputs(cognome_nome[i], stdout);
     for (j=strlen(cognome_nome[i]); j<nome_piu_lungo+10; j++)
     printf(" ");
     printf("%.2f\n", voto_informatica[i]);
    }
    uscita_sezione_menu();
    break;
   case'4': //quarto punto della consegna
    //messa in ordine dei nomi secondo le valutazioni al contrario
    for (i=0; i<num-1; i++){
     for (j=i+1; j<num; j++){
      if (voto_informatica[i]<voto_informatica[j]){
       temp2=voto_informatica[i];
       strcpy(temp, cognome_nome[i]);
       voto_informatica[i]=voto_informatica[j];
       strcpy(cognome_nome[i], cognome_nome[j]);
       voto_informatica[j]=temp2;
       strcpy(cognome_nome[j], temp);
      }
     }
    }
    //sezione di output dei nomi con voti
    banner_menu_4();
    for (i=0; i<num; i++){
    printf("|   ");
    fputs(cognome_nome[i], stdout);
    for (j=strlen(cognome_nome[i]); j<nome_piu_lungo+10; j++)
     printf(" ");
    printf("%.2f\n", voto_informatica[i]);
   }
   uscita_sezione_menu();
    break;
   case'5': //quinto punto della consegna
    //calcolo media 
    media=0;
    for(i=0;i<num;i++){
     media=media+voto_informatica[i];
    }
    media=(float)media/num;
    //sezione di output della media
    banner_menu_5();
    printf("|\t\t %.2f\n", media);
    uscita_sezione_menu();
    break;
   case'6': //sesto punto della consegna
    //calcolo media
    for(i=0;i<num;i++){
     media=media+voto_informatica[i];
    }
    media=(float)media/num;
    //sezione di output dei nomi con voti maggiori della media della classe
    banner_menu_6();
    for (i=0; i<num; i++){
     if(voto_informatica[i]>media){
      printf("|   ");
     fputs(cognome_nome[i], stdout);
     for (j=strlen(cognome_nome[i]); j<nome_piu_lungo+10; j++)
      printf(" ");
     printf("%.2f\n", voto_informatica[i]);
     }
    }
    uscita_sezione_menu();
    break;
   case'7':
    banner_menu_7();
    break;
   default:
    break;
  }
 }while(menu!='7');
 return 0;
}
void banner_menu (void){
 system("cls");
 banner_time();
 printf("|1. Ordina per nome dalla A-Z\n");
 printf("|2. Ordina per nome dalla Z-A\n");
 printf("|3. Ordina per voto da 1-10\n");
 printf("|4. Ordina per voto da 10-1\n");
 printf("|5. Media generale della classe\n");
 printf("|6. Alunni con valutazione superiore alla media\n");
 printf("|7. Esci\n");
 printf("|Premere il tasto desiderato");
}
void banner_menu_1(void){
 system("cls");
 banner_time();
 printf("|--!Alunno!-------!Valutazione!----\n");
}
void banner_menu_2(void){
 system("cls");
 banner_time();
 printf("|--!Alunno!-------!Valutazione!----\n");
}
void banner_menu_3(void){
 system("cls");
 banner_time();
 printf("|--!Alunno!-------!Valutazione!----\n");
}
void banner_menu_4(void){
 system("cls");
 banner_time();
 printf("|--!Alunno!-------!Valutazione!----\n");
}
void banner_menu_5(void){
 system("cls");
 banner_time();
 printf("|--------------!Media!-------------\n");
}
void banner_menu_6(void){
 system("cls");
 banner_time();
 printf("|-Valutazioni superiori alla  media-\n");
}
void banner_menu_7(void){
 int i;
 system("cls");
 banner_time();
 for (i=0; i<5; i++){
  printf("|Grazie di aver utilizzato il programma\n");
  sleep(1);
 }
}
void uscita_sezione_menu(void){
 printf("|----------------------------------\n");
 printf("|Premi un tasto per tornare al menu\n");
 getch();
}
void banner_time (void) {
 time_t t;
 time(&t);
 printf("|----------------------------------\n");
 printf("|%s", ctime(&t));
 printf("|----------------------------------\n");
}