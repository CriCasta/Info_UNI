#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==b){
		printf("I numeri sono uguali\n");
	}
	else if(a%b==0){
		printf("%d è multiplo di %d\n",a,b);
	}
}
