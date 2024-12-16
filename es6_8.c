#include <stdio.h>
#define D 5

int main(){
	int a[D];
	int b[D];
	printf("Inserisci 5 elementi per il primo array\n");
	for(int i=0;i<D;i++){
		scanf("%d",&a[i]);
	}
	printf("Inserisci 5 elementi per il secondo array\n");
	for(int i=0;i<D;i++){
		scanf("%d",&b[i]);
	}
	printf("Array 1: ");
	for(int i=0;i<D;i++){
		printf("%d\t",a[i]);
	}
	printf("\nArray 2: ");
	for(int i=0;i<D;i++){
		printf("%d\t",b[i]);
	}
	int permuta=1;
	int permuta_p;
	for(int i=0;i<D;i++){
		permuta_p=0;
		for(int j=0;j<D;j++){
			if(b[j]==a[i]){
				permuta_p=1;
			}
		}
		if(permuta_p!=1){
			permuta=0;
		}
		if(permuta==0){
			printf("\nIl secondo array NON è una permutazione del primo\n");
			return 0;
		}
	}
	printf("\nIl secondo array è una permutazione del primo\n");
	
	return 0;
}
