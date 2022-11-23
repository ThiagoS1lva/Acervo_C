#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetorNumerosAleatorios[50];
	int indiceVetor;

	srand(10);
	for (indiceVetor = 0; indiceVetor < 50; indiceVetor++) {
		vetorNumerosAleatorios[indiceVetor] = random() % 200;
	}
	printf("\n\n**** Números Pares ****\n");
	for (indiceVetor = 0; indiceVetor < 50; indiceVetor++) {
		if (vetorNumerosAleatorios[indiceVetor] % 2 == 0)
		{
			printf("%d\n", vetorNumerosAleatorios[indiceVetor]);
		}
	}
	printf("\n\n**** Números Ímpares ****\n");
	for (indiceVetor = 0; indiceVetor < 50; indiceVetor++) {
		if (vetorNumerosAleatorios[indiceVetor] % 2 != 0)
		{
			printf("%d\n", vetorNumerosAleatorios[indiceVetor]);
		}
	}
    return 0;
}
