#include <stdio.h>
#define N 5
int main(){
	int m[N][N],num,i,j,dif=0,dif_p,indice;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			dif_p=m[1][i]-m[j][i];
			if(dif_p<0){
				dif_p=dif_p*(-1);
			}
			if(dif_p>dif){
				dif=dif_p;
				indice=i;
			}
		}
	}
	printf("\n%d",dif);
	printf("\n%d",indice);
	return 0;
}
