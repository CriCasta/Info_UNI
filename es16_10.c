            

/******************************************************************************

Es10: Si scriva un programma C che definisce le funzioni:
leggi(), che legge da tastiera un numero intero non negativo
e lo restituisce. Se fosse negativo, deve continuare a chiederlo
all'utente;

stampa(int numero), che stampa le cifre del numero
indicato, in italiano. Per esempio, se numero e 4301 allora
deve stampare quattro tre zero uno; se numero e 0 allora deve
stampare zero.

È possibile denire ulteriori funzioni ausiliarie, se servono.
La funzione stampa() deve essere ricorsiva o chiamare
una vostra funzione ricorsiva.
 Caso base: numero = 0;
 Passo ricorsivo: stampa( numero/10 );
 Infine, tale programma deve avere anche un main() che
chiama leggi() per leggere un numero non negativo e poi
chiama stampa() per stamparne le cifre in italiano.

*******************************************************************************/

#include <stdio.h>

int leggi();
void stampa(int);

int main()
{
    int num;
    num=leggi();
    stampa(num);

    return 0;
}

int leggi(){
    int num;
    scanf("%d",&num);
    if(num<0){
        return leggi();
    }
    return num;
}
void stampa(int num){
    if(num>0){
        stampa(num/10);
        switch (num%10) {
        case 0:
            printf("ZERO\n");
            break;
        case 1:
            printf("UNO\n");
            break;
        case 2:
            printf("DUE\n");
            break;
        case 3:
            printf("TRE\n");
            break;
        case 4:
            printf("QUATTRO\n");
            break;
        case 5:
            printf("CINQUE\n");
            break; 
        case 6:
            printf("SEI\n");
            break;
        case 7:
            printf("SETTE\n");
            break;
        case 8:
            printf("OTTO\n");
            break;
        case 9:
            printf("NOVE\n");
            break;
        default:
            printf("Numero non riconosciuto\n");
    }
    }
    
    
}





