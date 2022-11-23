#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	char frase [30], guia;
	int tamanhoFrase, a , b, contagem = 0;
	
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", frase);
	tamanhoFrase = strlen(frase);
	srand( (unsigned)time(NULL) );
	
	while (contagem != tamanhoFrase) {
		a = rand() % tamanhoFrase;
		b = rand() % tamanhoFrase;
		guia = frase[a];
		frase[a] = frase[b];
		frase[b] = guia;
		contagem++;
	}
	printf("A palavra embaralhada fica: %s", frase);
	return 0;
}
