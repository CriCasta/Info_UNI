            

/******************************************************************************

 Es2_Contadoppie: Definire la funzione ricorsiva
int contadoppie(char *)
che presa per parametro una stringa, restituisce quante
coppie di doppie la stringa contiene, es. «ammiccare» ne
contiene 2.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int doppie(char *);

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[-1]='\0';
    
    printf("Numero di doppie nella stringa: %d",doppie(s));

    return 0;
}

int doppie(char *s){
    if(strlen(s)<2){
        return 0;
    }
    if(s[0]==s[1]){
        return 1+doppie(s+1);
    }
    else{
        return 0+doppie(s+1);
    }
}