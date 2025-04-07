#include <stdio.h>

int main(){
	int anno;
	scanf("%d",&anno);
	if((anno%4==0 && anno%100!=0)||anno%400==0){
		printf("L'anno %d è bisestile\n",anno);
	}
	return 0;
}
