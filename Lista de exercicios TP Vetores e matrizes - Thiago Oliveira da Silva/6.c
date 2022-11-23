#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	char nome[50][30];
	int contagem;
	
	for (contagem = 0; contagem < 50; contagem++) {
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome[contagem]);
	}
	
	printf("Ordem inversa:\n");
	for (contagem = 49; contagem >= 0; contagem--) {
		printf("%s\n", nome[contagem]);
	}
	return 0;
}
