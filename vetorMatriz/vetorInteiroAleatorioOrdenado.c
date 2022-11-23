#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetorNumerosAleatorios[20];
	int indiceVetor, indiceAuxiliar, temporaria;

	srand(10);
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		vetorNumerosAleatorios[indiceVetor] = random() % 200;
	}
	printf("**** Números Gerados ****\n");
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		printf("%d\n", vetorNumerosAleatorios[indiceVetor]);
	}

	for (indiceVetor = 0; indiceVetor < 19; indiceVetor++) {
		for (indiceAuxiliar = indiceVetor + 1; indiceAuxiliar < 20; indiceAuxiliar++) {
			if (vetorNumerosAleatorios[indiceVetor] > vetorNumerosAleatorios[indiceAuxiliar]) {
				temporaria = vetorNumerosAleatorios[indiceVetor];
				vetorNumerosAleatorios[indiceVetor] = vetorNumerosAleatorios[indiceAuxiliar];
				vetorNumerosAleatorios[indiceAuxiliar] = temporaria;
			}
		}
	}

	printf("**** Números Ordenados ****\n");
	for (indiceVetor = 0; indiceVetor < 20; indiceVetor++) {
		printf("%d\n", vetorNumerosAleatorios[indiceVetor]);
	}

    return 0;
}
