#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define L 30

int main(){
	char str1[L+1];
	fgets(str1,L+1,stdin);
	str1[-1]='\0';
	int cond;
	for(int i=0;i<(strlen(str1)-1)/2;i++){
		cond=1;
		if(str1[i]!=str1[i+((strlen(str1)-1)/2)]){
			cond=0;
		}
	}
	if(cond==1){
		printf("Uguali\n");
	else{
		printf("Diverse\n");
	}
	
	return 0;
}


