#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int vetorA[10], vetorB[10], somaAB[10], contagem, quantidade = 0;
	srand(time(NULL));
	
	for (contagem = 0; contagem < 10; contagem++) {
		vetorA[contagem] = rand() % 10;
		vetorB[contagem] = rand() % 10;
		somaAB[contagem] = vetorA[contagem] + vetorB[contagem];
		printf("Soma dos vetores na posicao %d: %d\n",contagem +1, somaAB[contagem]);
		if (vetorA[contagem] == vetorB[contagem]) {
			quantidade++;
		}
	}
	printf("\n");
	printf("O vetor A e o vetor B teve os mesmos numeros nas mesmas posicoes %d vezes.", quantidade);
	return 0;
}
