#include <stdio.h>
#define D 20

int main(){
	char a[D]; 
	int somma;
	for(int i=0; i<D; i++){
		scanf(" %c",&a[i]);
	}
	
	for(int i=0; i<D; i++){
		if(a[i]=='A' || a[i]=='a'){
			a[i]='1';
		}
		if(a[i]=='E' || a[i]=='e'){
			a[i]='2';
		}
		if(a[i]=='I' || a[i]=='i'){
			a[i]='3';
		}
		if(a[i]=='O' || a[i]=='o'){
			a[i]='4';
		}
		if(a[i]=='U' || a[i]=='u'){
			a[i]='5';
		}
		if(a[i]>='0' && a[i]<='9'){
			somma=somma+(a[i]-'0');
		}
	}
	printf("Array: \n");
	for(int i=0; i<D; i++){
		printf("%c", a[i]);
	}
	printf("\nSomma: %d\n",somma);
	
	return 0;
}
