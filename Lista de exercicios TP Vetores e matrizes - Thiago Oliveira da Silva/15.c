#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int matriz[10][10], linha, coluna, soma, somaSec, soma2, somaT;
	srand(time(NULL));
	
	for (linha = 0; linha < 10; linha++){
		for (coluna = 0; coluna < 10;coluna++){
			matriz[linha][coluna] = rand() % 100;
			printf("%d	", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Diagonal principal\n");
	for(linha = 0; linha < 10; linha++){
		for(coluna = 0; coluna < 10; coluna++){
			if (linha == coluna){
				printf("%d	", matriz[linha][coluna]);
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("Sem diagonal principal\n");
	for(linha = 0; linha < 10; linha++){
		for(coluna = 0; coluna < 10; coluna++){
			if (linha != coluna){
				printf("%d	", matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("elementos acima da diagonal principal\n");
	for(linha = 1; linha < 10; linha++){
		for(coluna = 0; coluna < 10; coluna++){
			if (linha == coluna){
				printf("     %d	", matriz[linha -1][coluna]);
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("soma dos elementos da diagonal secundaria\n");
	for(linha = 0; linha < 10; linha++){
		for(coluna = 0; coluna < 10; coluna++){
			if (linha + coluna == 9) {
				soma = matriz[linha][coluna];
				somaSec = somaSec + soma;
			}
		}
	}
	printf("%d\n", somaSec);
	//soma total da matriz
	for (linha = 0; linha < 10; linha++) {
		for (coluna = 0; coluna < 10; coluna++) {
			soma2 = matriz[linha][coluna];
			somaT = somaT + soma2;
		}
	}
	printf("Soma total da matriz: %d\n", somaT);
	
	return 0;
}
