#include <stdio.h>
#define N 10

int main(){ 
    int src[N];
    for(int i=0;i<N;i++){
    	scanf("%d",&src[i]);
    }
    
    int temp;
    for(int i=0;i<N;i++){
    	if(src[i]%2==0){
    		for(int j=N-1;j>=0;j--){
    			if(src[j]%2!=0){
    				temp=src[i];
    				src[i]=scr[j];
    				src[j]=temp;
    			}
    		}
    	}
    }
    for(int i=0;i<N;i++){
    	printf("%d",src[i]);
    }
    				


return(0); 
  
}

