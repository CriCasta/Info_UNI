#include <stdio.h>

typedef float *floatp;
void area_e_perimetro (int, floatp, floatp);

int main() {
	int continua=1;
	while(continua!=0) {
		float raggio,perimetro,area;
		scanf("%f",&raggio);
		area_e_perimetro(raggio, &perimetro, &area);
		prfloatp("\nPerimetro: %f e area: %f\n",perimetro,area);
		prfloatp("Vuoi continuare? Per terminare 0: ");
		scanf("%d",&continua);
	}

	return 0;
}

void area_e_perimetro(int raggio, floatp perimetro, floatp area) {
    *perimetro=2*raggio*3.14;
    *area=raggio*raggio*3.14;
}

