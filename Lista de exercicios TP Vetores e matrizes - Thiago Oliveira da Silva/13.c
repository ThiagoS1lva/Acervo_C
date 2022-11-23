#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	
	int vetorA[12], vetorB[12], contagem, matrizAB[12][2], coluna, linha;
	srand(time(NULL));
	
	for (contagem = 0; contagem < 12; contagem++) {
		vetorA[contagem] = rand() % 20;
		vetorB[contagem] = rand() % 20;
		matrizAB[contagem][0] = vetorA[contagem] * 2;
		matrizAB[contagem][1] = vetorB[contagem] - 5;
	}
	printf("Primeira coluna multiplicada por 2 e a segunda coluna subtraida por 5\n");
	for (linha = 0; linha < 12; linha++) {
		for (coluna = 0; coluna < 2; coluna++) {
			printf("%d	", matrizAB[linha][coluna]);
		}
		printf("\n");
	}
	return 0;
}
