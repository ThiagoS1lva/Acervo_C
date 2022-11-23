#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int vetorA[20], vetorB[20], contagem;
	srand(time(NULL));
	
	for(contagem = 0; contagem < 20; contagem++){
		vetorA[contagem] = rand() % 20;
	}
	printf("\n");
	for (contagem = 0; contagem < 20; contagem++){
		vetorB[contagem] = vetorA[20 - contagem - 1];
	}
	for(contagem = 0; contagem < 20; contagem++){	
		printf("%d:	%d	%d\n", contagem + 1, vetorA[contagem], vetorB[contagem]);
	}
	return 0;
}
