#include <stdio.h>
#include <math.h>

int potenza(int, int);

int radice(int, int);

int main( ) {
	int a,b;
	
	printf("Inserisci due numeri. Primo elevato al secondo\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("%d\n",potenza(a,b));
	
	printf("Inserisci argomento della radice.\n");
	scanf("%d",&a);
	printf("Inserisci indice della radice.\n");
	scanf("%d",&b);
	
	printf("%d\n",radice(a,b));
}

int potenza(int a, int b){
	int base=a;
	for(int i=1;i<b;i++){
		a=a*base;
	}
	return a;
}

int radice(int a, int b){
	float risultato = pow(a, 1.0 / b); 
	if ((int)risultato == risultato) { 
		return risultato;
	} else {
		return 0; 
	}
}
