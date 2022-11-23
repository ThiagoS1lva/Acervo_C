#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
	int x, y;
};
int main(int argc, char** argv) {
	struct ponto pontoA, pontoB;
	float distancia;
	
	printf("digite o Xa: ");
	scanf("%d", &pontoA.x);
	
	printf("digite o Xb: ");
	scanf("%d", &pontoB.x);
	
	printf("digite o Ya: ");
	scanf("%d", &pontoA.y);
	
	printf("digite o Yb: ");
	scanf("%d", &pontoB.y);
	
	distancia = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));


	printf("A raiz quadrada do ponto digitado e: %f", distancia);

	return 0;
}
