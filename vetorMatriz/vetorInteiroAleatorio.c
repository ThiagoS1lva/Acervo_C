#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetorNumerosAleatorios[20];
	int indiceVetor;

	srand(10);
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		vetorNumerosAleatorios[indiceVetor] = random() % 200;
	}
	printf("**** Números Gerados ****\n");
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		printf("%d\n", vetorNumerosAleatorios[indiceVetor]);
	}
    return 0;
}
