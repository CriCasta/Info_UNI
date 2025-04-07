#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define L 100

int main(){
	char str1[L+1];
	fgets(str1,L+1,stdin);
	str1[-1]='\0';
	str1[0]=toupper(str1[0]);
	for(int i=1;i<strlen(str1)-1;i++){
		if(str1[i-1]==' '){
			str1[i]=toupper(str1[i]);
		}
		else{
			str1[i] = tolower(str1[i]);
		}
	}
	printf("%s\n",str1);
	return 0;
}


