#include <stdio.h>
#define D 100

int main(){
	int a[D];
	int num;
	int presente;
	int l=0;
	do{
		presente=0;
		scanf("%d",&num);
		for(int i=0;i<l;i++){
			if(num==a[i]){
				presente=1;
			}
		}
		if(presente!=1){
			a[l]=num;
			l++;
		}
	}while(num!=0);
	printf("Array: ");
	for(int i=0;i<l;i++){
		printf("%d\t",a[i]);
	}
	printf("Lungezza: %d",l);
	printf("\n");
	return 0;
}
