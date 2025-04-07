#include <stdio.h>

typedef int *intp;
void sort (intp, intp, intp);

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sort(&a,&b,&c);
	printf("%d,%d,%d",a,b,c);
	return 0;
}

void sort(intp a, intp b, intp c){
	if(*a>*b){
	    int tmp=*b;
	    *b=*a;
	    *a=tmp;
	}
	if(*a>*c){
        int tmp=*c;
	    *c=*a;
	    *a=tmp;
	}
	if(*b>*c){
	    int tmp=*c;
	    *c=*b;
	    *b=tmp;
	}
}

