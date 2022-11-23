#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	float precoProduto[500], valorArrecadadoProd[500], somaValorArrecadado = 0;
	int contagem,  quantidadeVendida[500];
	srand(time(NULL));
	
	// "for" para dar valores aleatorios a variaveis
	for (contagem = 0; contagem < 500; contagem ++) {
		precoProduto[contagem] = rand() % 100;
		quantidadeVendida[contagem] = rand() % 100;
	}
	// "for" para calcular o valor arrecadado de cada produto e somar o total vendido na loja.
	for (contagem = 0; contagem <= 500; contagem++) {
		valorArrecadadoProd[contagem] = precoProduto[contagem] * quantidadeVendida[contagem];
		somaValorArrecadado = somaValorArrecadado + valorArrecadadoProd[contagem];
		printf("O produto %d vendeu: R$ %.2f\n", contagem + 1, valorArrecadadoProd[contagem]);
	}
	printf("\nO total vendido pela loja foi de R$%.2f", somaValorArrecadado);
	return 0;
}
