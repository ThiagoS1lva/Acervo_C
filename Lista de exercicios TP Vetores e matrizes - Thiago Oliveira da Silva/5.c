#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int idade[30], contagem, mediaIdade, somaIdade;
	char nome[30][100];
	
	srand(time(NULL));
	for (contagem = 0; contagem < 30; contagem++) {
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome[contagem]);
		idade[contagem] = rand() % 60;
		somaIdade = idade[contagem] + somaIdade;
	}
	mediaIdade = somaIdade / contagem;

	printf("Pessoas acima da media de idades: \n");
	for (contagem = 0; contagem < 30; contagem++ ) {
		if (idade[contagem] > mediaIdade) {
			printf("%s\n", nome[contagem]);
		}
	}
	return 0;
}
