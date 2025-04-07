#include <stdio.h>
#define D 10

typedef struct{
	int num;
	int cifre;
	int p_d;
}t_info; // t_info è un tipo user defined

int fcifre(int);
int pari_disp(int);

int main( ) {
	t_info a[D]; // array di 10 elementi t_info
	int i;
	
	for(i=0; i<D; i++){
		scanf("%d",&a[i].num);
		a[i].cifre=fcifre(a[i].num);
		a[i].p_d=pari_disp(a[i].num);
	}
	
	for(i=0; i<D; i++){
		printf("\n %d %d %d: ",a[i].num,a[i].cifre,a[i].p_d);
	}
	
	return 0;
}

int pari_disp(int n){
	return n%2;
}

int fcifre(int n){
	int cont=0;
	while(n>0){
		cont++;
		n=n/10;
	}
	return cont;
}
