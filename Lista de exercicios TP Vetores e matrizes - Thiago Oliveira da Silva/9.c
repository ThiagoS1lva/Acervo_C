#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int vetorA[30], vetorB[30], vetorAB[60], contagem;
	srand(time(NULL));
	
	for(contagem = 0; contagem < 30; contagem++){
		vetorA[contagem] = rand() % 60;
		vetorB[contagem] = rand() % 60;
		vetorAB[contagem] = vetorA[contagem];
	}
	printf("\n");
	for(contagem = 0; contagem < 30; contagem++){
		vetorAB[30 + contagem] = vetorB[contagem];
	}
	printf("A juncao dos dois vetores e:\n");
	for(contagem = 0; contagem < 60; contagem++){
	printf("%d\n", vetorAB[contagem]);
	}
	
	return 0;
}
