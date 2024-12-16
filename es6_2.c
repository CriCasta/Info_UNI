#include <stdio.h>
#define D 15

int main(){
	int a[D];
	a[0]=1;
	int primo;
	int l=1;
	for(int i=2;i<=50;i++){
		primo=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				primo=0;
			}
		}
		if(primo){
			a[l]=i;
			l++;
		}
	}
	printf("\nArray: ");
	for(int i=0;i<D;i++){
		printf("%d\t",a[i]);
	}	
	return 0;
}
