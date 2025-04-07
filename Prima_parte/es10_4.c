#include <stdio.h>

int next_prime(int);

int main( ) {
	int number;
	int c;
	int p = 2;
	printf("Quanti numeri primi vuoi stampare? ");
	scanf("%d", &number);
	for (c = 0; c < number; c++){
		printf("%d\n", p );
		p = next_prime( p );
	}
}
int next_prime(int last){
	last=last+1;
	int primo=0;
	while(primo!=1){
                primo=1;
                for(int j=2;j<=last/2;j++){
                        if(last%j==0){
                                primo=0;
                        }
                }
		if(primo){
                        return last;
		}
		last++;
	}
}
