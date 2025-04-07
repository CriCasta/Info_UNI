            

/******************************************************************************

Es6: Scrivere una funzione ricorsiva
int cifra(int num, int k) che ritorna la k-esima
cifra di numero partendo da destra. Ad esempio
cifra(829,2) restituisce 2.

*******************************************************************************/

#include <stdio.h>

int cifra(int,int);

int main()
{
    int num;
    scanf("%d",&num);
    int k;
    scanf("%d",&k);
    printf("%d\n",cifra(num,k));

    return 0;
}

int cifra(int num,int k){
    if(k==1)return num%10;
    return cifra(num/10,k-1);
    
}


