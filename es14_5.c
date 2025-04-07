#include <stdio.h>
#include <string.h>
#include <math.h>
#define L 50

typedef int *intp;

int main() {
    char str[L+1];
    fgets(str,L+1,stdin);
    str[-1]='\0';
    
    int n;
    do{
        scanf("%d",&n);
    }while(n<0 || n>strlen(str)-1);
    
    char str2[strlen(str)-1];
    char tmp;
    for(int i=1;i<strlen(str)-1;i++){
        if((i-n)<0){
            str2[(strlen(str2)-2)+(i-n)]=str[i];
        }
        else{
            str2[i-n]=str[i];
        }
    }
	printf("%s\n",str2);

	return 0;
}

