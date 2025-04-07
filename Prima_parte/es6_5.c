#include <stdio.h>
#define D 20

int main(){
	char a[D];
	char b[D];
	printf("Inserisci 20 caratteri\n");
	for(int i=0;i<D;i++){
		scanf(" %c",&a[i]);
	}
	for(int i=0;i<D;i++){
		if(a[i]=='A'||a[i]=='a'){
			a[i]='1';
		}
		if(a[i]=='E'||a[i]=='e'){
			a[i]='2';
		}
		if(a[i]=='I'||a[i]=='i'){
			a[i]='3';
		}
		if(a[i]=='O'||a[i]=='o'){
			a[i]='4';
		}
		if(a[i]=='U'||a[i]=='u'){
			a[i]='5';
		}
	}
	int somma=0;
	for(int i=0;i<D;i++){
		if(a[i]=='1'){
			somma+=1;
		}
		if(a[i]=='2'){
			somma+=2;
		}
		if(a[i]=='3'){
			somma+=3;
		}
		if(a[i]=='4'){
			somma+=4;
		}
		if(a[i]=='5'){
			somma+=5;
		}
		if(a[i]=='6'){
			somma+=6;
		}
		if(a[i]=='7'){
			somma+=7;
		}
		if(a[i]=='8'){
			somma+=8;
		}
		if(a[i]==9'){
			somma+=9;
		}
	}
	printf("Array 1: ");
	for(int i=0;i<D;i++){
		printf(" %c",a[i]);
	}
	printf("\nLa somma delle cifre è: %d",somma);
	printf("\n");
	return 0;
}
