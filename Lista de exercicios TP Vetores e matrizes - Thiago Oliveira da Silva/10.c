#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int vetorA[25], vetorB[25], vetorAB[50], contagem, auxiliar = 0;
	srand(time(NULL));
	
	for(contagem = 1; contagem <= 25; contagem++){
		vetorA[contagem] = rand() % 50;
		vetorB[contagem] = rand() % 50;
	}	
	
	for (contagem = 0; contagem < 25; contagem++){
			vetorAB[auxiliar] = vetorA[contagem];
			auxiliar = auxiliar + 2;
	
	}
	auxiliar = 1;
	for (contagem = 0; contagem < 25; contagem++){
		vetorAB[auxiliar] = vetorB[contagem];
		auxiliar = auxiliar + 2;
	}
	printf("A junçao dos vetores intercalados\n");
	for (contagem = 0; contagem < 50; contagem++){
		printf("%d\n", vetorAB[contagem]);
	}

	return 0;
}


