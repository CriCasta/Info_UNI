#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int n1=n;
	int c=0;
	while(n1>0){
		n1=n1/10;
		c++;
	}
	if(c==0){
		printf("monotono\n");
	}
	int m1,m2;
	for(int i=1;i<c;i++){
		int pot=1;
		for(int j=i;j<c;j++){
			pot=pot*10;
		}
		m1=n/pot;
		n=n-m1*pot;
		m2=n/(pot/10);
		printf("%d\n",m1);
		printf("%d\n",m2);
		if(m1<m2){
			printf("Non è monotono\n");
			return 0;
		}
	}
	printf("monotono decrescente\n");
	return 0;
}
