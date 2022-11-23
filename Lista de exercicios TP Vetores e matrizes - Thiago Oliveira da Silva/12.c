#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int A[7], B[7], Matriz[7][2], contagem, linha, coluna;
	srand(time(NULL));
	
	for (contagem = 0; contagem < 7; contagem++) {
		A[contagem] = rand() % 10;
		B[contagem] = rand() % 10;
		Matriz[contagem][0] = A[contagem];
		Matriz[contagem][1] = B[contagem];
		
	}
	for (linha = 0; linha < 7; linha++){
		for (coluna = 0; coluna < 2; coluna++) {
			printf("%d	", Matriz[linha][coluna]);
		}
	printf("\n");
	}
		
	
	return 0;
}
