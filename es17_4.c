            

/******************************************************************************

Es4_Cifre: Definire la funzione ricorsiva
int cifre(int)
che restituisce il numero di cifre del numero >=0 passato
come parametro.


*******************************************************************************/

#include <stdio.h>
int cifre(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("Il numero %d è composto da %d cifre",n,cifre(n));

    return 0;
}

int cifre(int n){
    if(n<10) return 1;
    else return 1+cifre(n/10);
}