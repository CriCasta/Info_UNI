#include <stdio.h>
#include <math.h>

typedef int *intp;
int radice(int, intp);

int main() {
	int num, risultato;
	scanf("%d",&num);
	printf("Il numero %d ",num);
	if(radice(num, &risultato)){
	    printf("possiede radice precisa\n");
	}
	else{
	    printf("non possiede radice precisa\n");
	}

	return 0;
}

int radice(int num, intp risultato) {
	double radice=pow((double) num, 1.0/2.0);
	printf("\n %f\n",radice);
	*risultato=(int) radice;
	if(*risultato%2==0){
		return 1;
	}
	else{
		return 0;
	}
}

