#include <stdio.h>
#define D 10

int main(){
	int a[D];
	int i, sum,sum2;

	for(int i=0;i<D;i++){
		scanf("%d",&a[i]);
	}
	printf("\nArray: ");
	for(int i=0;i<D;i++){
               printf("%d\n",a[i]);
        }
	sum=0;
	for(int i=0;i<D;i++){
               sum=sum+a[i];
        }
	printf("%d\n",sum);
	sum2=0;
	for(int i=1;i<D+1;i++){
               sum2=sum2+a[i-1];
        }
	printf("%d\n",sum2);
	return 0;
}
