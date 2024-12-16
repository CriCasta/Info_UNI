#include <stdio.h>

int ismultiplo(int, int);

int main(){
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("%d\n",ismultiplo(a,b));
	
	return 0;
}

int ismultiplo(int a, int b){
	if(a%b==0){
		return 1;
	}
	else{
		return 0;
	}
}
