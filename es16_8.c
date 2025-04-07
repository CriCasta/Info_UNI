            

/******************************************************************************

Es8: La serie “buffa” di interi è così definita: gli
elementi di posizione 1, 2 e 3 valgono tutti e tre 1,
e in generale l'elemento di posizione i (con i>=4) è
uguale alla somma degli elementi di posizione i -
1 e i - 3. A partire da questa definizione si ricava
ad esempio che i numeri della serie buffa di
posizione da 1 a 9 sono 1, 1, 1, 2, 3, 4, 6, 9, 13.
Scrivere la versione ricorsiva della funzione che
calcola l’elemento di posizione z della serie buffa.

*******************************************************************************/

#include <stdio.h>

int buffa(int);

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",buffa(num));

    return 0;
}

int buffa(int z){
    if(z < 4) return 1;
    return buffa(z - 1) + buffa(z - 3);
}


