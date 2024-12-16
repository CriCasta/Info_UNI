#include <stdio.h>
#define D 20

int cifra_minima(int);

int main(){
	int num;
	
	do{
		scanf("%d",&num);
	}while(num<0);
	
	printf("Cifra minima: %d\n",cifra_minima(num));
	
	return 0;
}

int cifra_minima(int num){
	int cifra_min=0;
	while(num>0){
		if(num%10>cifra_min)
			cifra_min=num%10;
		num=num/10;
	}
	return cifra_min;
}
