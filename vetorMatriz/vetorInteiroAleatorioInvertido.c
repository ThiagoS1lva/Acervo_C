#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetorNumerosAleatorios[20];
	int indiceVetor;

	srand(10);
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		vetorNumerosAleatorios[indiceVetor] = random() % 200;
	}
	printf("\n\n**** Números Gerados ****\n");
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		printf("%d ", vetorNumerosAleatorios[indiceVetor]);
	}
	printf("\n\n**** Números na Ordem Inversa ****\n");
	for (indiceVetor = 19; indiceVetor >= 0; indiceVetor--) {
		printf("%d ", vetorNumerosAleatorios[indiceVetor]);
	}
    return 0;
}
