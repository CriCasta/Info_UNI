#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==0){
		printf("Il polinomio è di grado inferiore al secondo\n");
		return 0;
	}
	float det=(b*b)-(4*a*c);
	if(det>0){
		printf("Soluzioni reali e distinte\n");
	}else if(det==0){
		printf("Soluzioni coincidenti\n");
	}else{
		printf("Soluzioni complesse coniugate\n");
	}
	return 0;
}
