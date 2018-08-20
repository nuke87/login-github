/*Passwort vergleichg mit einer Textdatei(zur Zeit nur ein Zeichen möglich)
 *Bei Falscheingabe wird in die log.txt eine Fehlermeldung protokoliert.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    FILE *datei;

    
    char y = 'a';
    

    fp = fopen("test.txt","r");
    datei = fopen("log.txt","w");

    if (fp == NULL)
    {
        printf("Datei konnte nicht geöffnet werden.\n");
    }else{
          if (y ==(fgetc(fp)))
          {
              printf("Passwort korrekt\n");
          }else{
            printf("PW falsch\n");
            fprintf(datei, "Fehler" );
          }
    }
    fclose(datei);
    fclose(fp);
    return 0;
}