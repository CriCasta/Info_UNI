#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define L 100

int main(){
	char str[L+1];
	int cont=0;
	int cond=0;
	fgets(str,L+1,stdin);
	for(int i=0;i<L;i++){
		if(str[i]==str[i+1] && (str[i]>=97 && str[i]<=122)&& str[i]!='a'){
			cont++;
			if(str[i+1]==str[i+2]){
				cond=1;
			}
		}
	}
	
	if(cond==1){
		printf("gne gne\n");
	}
	else{
		printf("%d\n",cont);
	}
	return 0;
}


