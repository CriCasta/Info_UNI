#include <stdio.h>
#define D 5

int main(){
	int cifre[D];
	int n,elemento;
	int ncifre;
	
	do{
		printf("Inserisci un numero: ");
		scanf("%d",&n);
	}while(n<0);
	printf("Popolo l'array\n");
	for(int i=0;i<D;i++){
		do{
			ncifre=1;
			do{
				scanf("%d",&elemento);
			}while(elemento<=0);
			if(elemento/10>0){
				printf("Il numero ha più di una cifra\n");
				ncifre++;
			}
		}while(ncifre>1);
		cifre[i]=elemento;
		
	}
	for(int i=0;i<D;i++){
		printf("%d\t",cifre[i]);
	}
	int contenuto;
	int cifra,c=0;
	int n1=n;
	int resto;
	int giusto=1;
	while(n1>0){
		n1=n1/10;
		c++;
	}
	if(c!=1){
		for(int i=0;i<c;i++){
			contenuto=0;
			int pot=1;
		        for(int j=i;j<c-1;j++){
		                pot=pot*10;
		        }
		        cifra=n/pot;
		        n=n-cifra*pot;
			printf("\nLa cifra è %d",cifra);
			for(int x=0;x<D;x++){
				if(cifre[x]==cifra){
					contenuto=1;
				}
			}
			if(contenuto==0){
				giusto=0;
			}
		}
	}
	else{
		giusto=0;
		for(int x=0;x<D;x++){
			if(cifre[x]==n){
				giusto=1;
			}
		}
	}
	if(giusto){
		printf("\nL'array contiene tutte le cifre di n\n");
	}
	else{
		printf("No buono\n");
	}
	return 0;
}
