#include <stdio.h>

int multipli(int, int);

int main(){
	int n,m;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	printf("%d\n",multipli(n,m));
	return 0;
}

int multipli(int n, int m){
	int cont;
	for(int i=1;i<=n;i++){
		if(i%m==0){
			cont++;
		}
	}
	return cont;
}
