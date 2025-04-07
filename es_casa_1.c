

/******************************************************************************

1) Scrivere un sottoprogramma che riceve come parametri un array di interi e la sua dimensione. Il
sottoprogramma sostituisce ciascun valore negativo dell’array con il suo valore assoluto. Scrivere
un programma che chiede all’utente 10 valori, invoca la funzione sopra definita e visualizza il
contenuto finale dell’array.

*******************************************************************************/

#include <stdio.h>
#define L 10

void sostituisci(int *,int);

int main(){   
    int a[L];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sostituisci(a,L);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

void sostituisci(int * a,int lunghezza){
    for(int i=0;i<lunghezza;i++){
        if(a[i]<0){
            a[i]=-a[i];
        }
    }
}
