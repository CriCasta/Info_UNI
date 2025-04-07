#include <stdio.h>
#define D 10

int main(){
	int a[] ={ 1, 1, 4, 7, 9,-1};
	int i=0, sum,sum2;
	int cres=1;
	int decr=1;
	
	while(a[i]!=-1){
		if(a[i+1]<a[i]){
			if(a[i+1]!=-1){
				cres=0;
			}
		}
		if(a[i]<a[i+1]){
			decr=0;
		}
		i++;
	}
	if(cres){
		printf("Array crescente\n");
	}
	else if(decr){
		printf("Array decrescente\n");
	}
	else{
		printf("Array non ordinato\n");
	}
	return 0;
}
