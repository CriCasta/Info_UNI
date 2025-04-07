#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define L 100

int main(){
	char str1[L+1];
	char str2[L+1];
	fgets(str1,L+1,stdin);
	fgets(str2,L+1,stdin);
	str1[-1]='\0';
	str2[-1]='\0';
	int cond;
	for(int i=0;i<(strlen(str1)-strlen(str2))+1;i++){
		cond=1;
		for(int k=0;k<strlen(str2)-1;k++){
			if(str1[i+k]!=str2[k]){
				cond=0;
			}
		}
		if(cond==1){
			str1[i]='X';
		}
	}
	
	printf("%s\n",str1);
	
	return 0;
}


