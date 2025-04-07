            

/******************************************************************************

 Es3_Palindroma: Definire la funzione ricorsiva
int palindroma(char *, int, int)
che ricevuta in ingresso una stringa, la posizione del
primo carattere valido nella stringa (di solito 0 nella
chiamata nel main) e la sua lunghezza, restituisce 1 se la
stringa passata come parametro è palindroma, 0
altrimenti.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int palindroma(char *, int, int);

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[-1]='\0';
    
    printf("Palindroma? %d",palindroma(s,0,strlen(s)-2));

    return 0;
}

int palindroma(char *s,int c_valido, int l){
    if(strlen(s)<2 && c_valido==0){
        return 1;
    }
    if(s[c_valido]==s[l-c_valido]){
        
        if(c_valido==l/2){
            return 1;
        }
        return palindroma(s,c_valido+1,l);
    }
    else{
        return 0;
    }
}