#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int numero[51], maiorNum, contagem;
	srand(time(NULL));
	
	//for de atribuicao de numeros
	for (contagem = 0; contagem <= 50; contagem++){
		numero[contagem] = rand() % 50;
	//	printf("%d\n", numero[contagem]);
	}
	maiorNum = numero[1];
	// for para verificar se existe algum numero maior que o já atribuido
	for (contagem = 0; contagem <= 50; contagem++){
		if (numero[contagem] > maiorNum) {
			maiorNum = numero[contagem];
		}
	}
	printf("Maior numero: %d\n", maiorNum);
	
	// for para saber as posicoes
	for (contagem = 0; contagem <= 50; contagem++){
		if (numero[contagem] == maiorNum){
			printf("O maior numero aparece na posicao: %d\n", contagem);
		}
	}
	return 0;
}
