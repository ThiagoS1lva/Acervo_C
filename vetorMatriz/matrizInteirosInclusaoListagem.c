#include<stdio.h>
#include<stdlib.h>

int main() {
	int matrizNumerosInteiros[5][10];
	int linha, coluna;

	srand(10);
	for(linha = 0; linha < 5; linha++) {
		for(coluna = 0; coluna < 10; coluna++) {
			matrizNumerosInteiros[linha][coluna] = random() % 1000;
		}
	}
	for(linha = 0; linha < 5; linha++) {
		for(coluna = 0; coluna < 10; coluna++) {
			printf("%4d ",matrizNumerosInteiros[linha][coluna]);
		}
		printf("\n");
	}
    return 0;
}
