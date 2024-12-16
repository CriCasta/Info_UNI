#include <stdio.h>
#define D 10
int main(){
	char a1[D];
	char a2[D];
	int i;
	int cont = 0;
	
	
	
	for(i=0; i<D; i++)
		scanf(" %c",&a1[i]);
		
	for(i=0; i<D; i++){
	    if(a1[i]>='0' && a1[i]<='9'){
	        a1[i]='*';
	    }
	    else{
	        a2[cont]=a1[i];
	        cont++;
	    }
	}
	
	for(i=0; i<D; i++){
	    printf("%c ",a1[i]);
	}
	printf("\n");
	for(i=0; i<cont; i++){
	    printf("%c ",a2[i]);
	}
	
	
	
	return 0;

}
