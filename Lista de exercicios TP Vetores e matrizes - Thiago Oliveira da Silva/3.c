#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int numeros[200], contagem, somaNum = 0;
	float mediaNum;
	srand(time(NULL));
	
	// for para dar numeros aleatorio a variavel e calcular a soma;
	for (contagem = 0; contagem < 200; contagem++) {
		numeros[contagem] = rand() % 200;
		somaNum = somaNum + numeros[contagem];
	}	
	mediaNum = somaNum / contagem;
	printf("A media foi de %.2f", mediaNum);
	printf("Numeros maiores que a media: \n");
	//For para dar a posicao de cada numero que é maior que  a media.
	for (contagem = 0; contagem < 200; contagem++) {
		if (numeros[contagem] >= mediaNum) {
			printf("%d na posicao	%d\n", numeros[contagem], contagem);
		}
	}
	return 0;
}
