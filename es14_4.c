#include <stdio.h>
#include <math.h>

typedef int *intp;
int potenza(int, int);
int radice_ennesima(int,int,intp);

int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Potenza:%d\n",potenza(a,b));
	int num,grado,risultato;
	scanf("%d",&num);
	scanf("%d",&grado);
	printf("Il numero %d con radice di grado %d ",num,grado);
	if(radice_ennesima(num, grado, &risultato)){
	    printf("possiede radice precisa\n");
	}
	else{
	    printf("non possiede radice precisa\n");
	}

	return 0;
}

int potenza(int a, int b) {
    return (int) pow((double) a, (double) b);
}

int radice_ennesima(int num, int grado, intp risultato) {
    double radice=pow((double) num, 1.0/((double) grado));
    *risultato=(int) radice;
    if(*risultato%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

