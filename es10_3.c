#include <stdio.h>

int ncifre(int);

int main(){
	int n;
	
	scanf("%d",&n);
	
	printf("%d\n",ncifre(n));
	return 0;
}

int ncifre(int n){
	int cont;
	int resto;
	int copia=n;
	while(n>0){
		resto=n%10;
		if(resto!=0){
			if(copia%resto==0){
				cont++;
			}
		}
		n=n/10;
	}
	return cont;
}
