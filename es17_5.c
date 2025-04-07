            

/******************************************************************************

Es5_Monotono: Definire la funzione ricorsiva
int monotono(int)
che restituisce 1 se il numero passato in ingresso è
monotono crescente (es. 137), 0 altrimenti.

*******************************************************************************/

#include <stdio.h>
int monotono(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("Il numero %d è monotono? %d",n,monotono(n));

    return 0;
}

int monotono(int n){
    if(n<10) return 1;
    if(n%10>=(n/10)%10){
        return monotono(n/10);
    }
    else{
        return 0;
    }
}