            

/******************************************************************************

Es11: Si scriva un programma C che definisce la funzione ricorsiva
int cifra_massima(int num) la quale deve restituire la cifra
massima nella rappresentazione decimale di num. Tale programma
dovrà inoltre definire un main che
- chiede all’utente di inserire un numero non negativo,
- chiama la funzione cifra massima per calcolarne la cifra massima
- stampa tale cifra massima trovata.
Esempi
$ ./a.out Inserisci un numero non negativo: 1232
La cifra massima di 1232 è 3
$ ./a.out Inserisci un numero non negativo: 0
La cifra massima di 0 è 0
$ ./a.out Inserisci un numero non negativo: -5
Inserisci un numero non negativo: 30756
La cifra massima di 30756 è 7

*******************************************************************************/

#include <stdio.h>

int cifra_massima(int);

int main()
{
    int num;
    scanf("%d",&num);
    printf("Cifra massima: %d",cifra_massima(num));

    return 0;
}

int cifra_massima(int num){
    int vero=1;
    int num_copia=num;
    if(num==0){
        return 0;
    }
    int cifra=num%10;
    while(num_copia>0){
        if((num_copia/10)%10>cifra){
            vero=0;
        }
        num_copia/=10;
    }
    if(!vero){
        cifra_massima(num/10);
    }
    else{
        return cifra;
    }
}





