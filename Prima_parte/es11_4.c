#include <stdio.h>
#define D 3

char cifra(char);
char decifra(char);
int verificalettera(char);

int main(){
	char c1,c2,c3,c;
	char a[20];
	int cont=0;
	
	
	printf("Inserire carattere da cifrare: ");
	scanf(" %c",&c1);
	printf("Carattere cifrato: %c",cifra(c1));
	
	printf("\n\nInserire carattere cifrato: ");
	scanf(" %c",&c2);
	printf("Carattere non cifrato: %c",decifra(c2));
	
	printf("\n\nInserire carattere: ");
	scanf(" %c",&c3);
	if(verificalettera(c3)){
		printf("Il carattere è una lettera minuscola\n");
	}
	else{
		printf("Il carattere è qualcosa di non minuscolo\n\n");
	}
	
	printf("Popola array\n");
	scanf("%c",&c);
	while(c!=32 && cont<20){
		a[cont]=c;
		cont++;
		scanf("%c",&c);
	}
	
	int cont2=0;
	char ac[20];
	
	printf("Cifro l'array\n");
	while(cont2!=cont){
		ac[cont2]=cifra(a[cont2]);
		printf("%c",ac[cont2]);
	}
	

	
	return 0;
}

char cifra(char c){
	if((c+D)>='A' && (c+D)<='C'){
		c=c+D+26;
	}
	else if((c+D)>126){
		c=(c+D)-94;
		
	}
	else{
		c=c+D;
	}
	return c;
}

char decifra(char c){
	if((c-D)<='Z' && (c+D)>='X'){
		c=c-D-26;
	}
	else if((c-D)<='!'){
		c=c-D+94;
	}
	else{
		c=c-D;
	}
	return c;

}

int verificalettera(char c){
	if(c>='a' && c<='z'){
		return 1;
	}
	return 0;
}
