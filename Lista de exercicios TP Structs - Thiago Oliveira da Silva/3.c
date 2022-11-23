#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct regProdutos {
	float precoProdutos[200], valorArrecadado[200], somaArrecadado;
	int quantVendidida [200];
};
int main(int argc, char** argv) {
	struct regProdutos vetorProd;
	int contador;
	srand(time(NULL));
	
	for(contador = 0; contador < 200; contador++) {
		vetorProd.precoProdutos[contador] = rand() % 100;
		vetorProd.quantVendidida[contador] = rand() % 100;
		vetorProd.valorArrecadado[contador] = vetorProd.precoProdutos[contador] * vetorProd.quantVendidida[contador];
		vetorProd.somaArrecadado = vetorProd.valorArrecadado[contador] + vetorProd.somaArrecadado;
		printf("O produto %d arrecadou: %.2f\n", contador + 1, vetorProd.valorArrecadado[contador]);
	}
	printf("A loja vendeu no total: %.2f", vetorProd.somaArrecadado);
	return 0;
}
