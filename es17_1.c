            

/******************************************************************************

 Es1_Doppie: Definire la funzione ricorsiva
int doppie(char *)
che presa per parametro una stringa, restituisce 1 se la
stringa contiene almeno un carattere doppio (ripetuto in
posizioni consecutive, es «gatto»), 0 altrimenti.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int doppie(char *);

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[-1]='\0';
    
    printf("Presenta doppie=1: %d",doppie(s));

    return 0;
}

int doppie(char *s){
    if(strlen(s)<2){
        return 0;
    }
    if(s[0]==s[1]){
        return 1;
    }
    else{
        return doppie(s+1);
    }
    
}