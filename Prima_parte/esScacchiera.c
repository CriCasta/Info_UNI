#include <stdio.h>

int main(){
	int rex,rey,regx,regy;
	do{
		do{
			scanf("%d",&rex);}
		while(rex<1 || rex>8);
		do{
        	        scanf("%d",&rey);}
	        while(rey<1 || rey>8);
		do{
                	scanf("%d",&regx);}
        	while(regx<1 || regx>8);
		do{
                	scanf("%d",&regy);}
        	while(regy<1 || regy>8);}
	while(rex==regx && rey==regy);
	printf("Giusto\n");
	int d;
	if(rex==regx){
		if(rey>regy){
			d=rey-regy;
			printf("La regina deve spostarsi a NORD di %d caselle\n",d);
		}
		else{
			d=regy-rey;
			printf("La regina deve spostarsi a SUD di %d caselle\n",d);
		}
	}
	else if(rey==regy){
                if(rex>regx){
                        d=rex-regx;
                        printf("La regina deve spostarsi a EST di %d caselle\n",d);
                }
                else{
                        d=regx-rex;
                        printf("La regina deve spostarsi a OVEST di %d caselle\n",d);
                }
        }             	
	else if(((rex-regx)==(rey-regy))||(-(rex-regx)==(rey-regy))){
		d=rex-regx;
		if(d<0){
			d=-d;
		}
		if(rey>regy){
			if(rex<regx){
				printf("La regina deve spostarsi a NORD OVEST di %d caselle\n",d);
			}
			else{
				printf("La regina deve spostarsi a NORD EST di %d caselle\n",d);
			}
		}
		else{
			if(rex<regx){
                                printf("La regina deve spostarsi a SUD OVEST di %d caselle\n",d);
                        }
                        else{
                                printf("La regina deve spostarsi a SUD EST di %d caselle\n",d);
                        }
		}
	}
	else{
		printf("La regina non può mangiare il re\n");
	}
	return 0;
}



