#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct infoProdutos {
	int codigo, quantidade;
	char nome[15];
	float preco;
};
int main(int argc, char** argv) {
	struct infoProdutos vetorProdutos[10];
	int contagem, prodDesejado, quantDesejada, codigoDigitado, contagemProdutos;
	srand(time(NULL));
	
	for (contagem = 0; contagem < 10; contagem++){
		vetorProdutos[contagem].codigo = contagem + 1;
		vetorProdutos[contagem].quantidade = 1 + rand() % 10;
		printf("%d\n", vetorProdutos[contagem].quantidade);
	}
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigoDigitado);
	while (codigoDigitado != 0) {
		printf("Digite a quantidade desejada: ");
		scanf("%d", &quantDesejada);
		
		//For para verificar se existe o codigo do produto digitado e se tem quantidade suficiente do produto.
		
		for(contagemProdutos = 0; contagemProdutos < 10; contagemProdutos++){
			if(codigoDigitado == vetorProdutos[contagemProdutos].codigo){
				if(quantDesejada <= vetorProdutos[contagemProdutos].quantidade) {
					vetorProdutos[contagemProdutos].quantidade = vetorProdutos[contagemProdutos].quantidade - quantDesejada;
					printf("Pedido aprovado!\n");
					printf("Quantidade de produtos que sobrou: %d\n", vetorProdutos[contagemProdutos].quantidade);
				}
				else {
					printf("Pedido nao aprovado!\nQuantidade Insuficiente!\n");
				}
			}
		}
		printf("Digite o codigo do produto: ");
		scanf("%d", &codigoDigitado);
	}
	
	printf("Quantidade de produtos que sobraram de cada produto!\n");
	for(contagem = 0; contagem < 10; contagem++){
		printf("%d\n", vetorProdutos[contagem].quantidade);
	}

	return 0;
}
