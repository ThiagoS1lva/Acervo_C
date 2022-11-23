#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int matriz[5][4][2], linha, coluna, profundidade;
	srand(time(NULL));
	
	for (profundidade = 0; profundidade < 2; profundidade ++){
		for(linha = 0; linha < 5; linha++){
			for(coluna = 0; coluna < 4; coluna++){
				matriz[linha][coluna][profundidade] = rand() % 100;
				printf("%d	", matriz[linha][coluna][profundidade]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
