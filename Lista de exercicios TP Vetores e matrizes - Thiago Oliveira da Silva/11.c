#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int matrizA[5][3], linha, coluna, matrizB[5][3], matrizC[5][3];
	srand(time(NULL));
	
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			matrizA[linha][coluna] = rand() % 50;
			matrizB[linha][coluna] = rand() % 50;
			matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
		}
	}
	printf("A soma das matrizes: \n");
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("%d	", matrizC[linha][coluna]);
		}
	printf("\n");
	}
	return 0;
}


