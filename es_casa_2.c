

/******************************************************************************

2) Scrivere un sottoprogramma che chiede all’utente una stringa e conta quante vocali sono
contenute, restituendo il risultato. Scrivere un programma che chiede all’utente una stringa di al
massimo 30 caratteri, invoca su di essa la funzione sopra definita e visualizza il risultato.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define L 30

int conta(char *,int);

int main(){   
    char s[L+1];
    fgets(s,L+1,stdin);
    s[-1]='\0';
    int vocali=conta(s,L+1);
    printf("%s\n",s);
    printf("%d\n",vocali);
    return 0;
}

int conta(char * s,int lunghezza){
    int vocali=0;
    char voc[]={'a','e','i','o','u'};
    
    for(int i=0;i<lunghezza;i++){
        s[i]=tolower(s[i]);
        for(int k=0;k<5;k++){
            if(s[i]==voc[k]){
                vocali+=1;
            }
        }
    }
    return vocali;
}
