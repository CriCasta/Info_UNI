#include <stdio.h>
#define N 5

int main(){
	int m[N][N];
	int num;
	int i,j;
	int pari;
	int cont=0;

	scanf("%d",&num);
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(j<cont){
				m[i][j]=num+cont;
			}
			else{
				m[i][j]=num+j;
			}
		}
		cont++;
	}
	
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
		
	return 0;

}
