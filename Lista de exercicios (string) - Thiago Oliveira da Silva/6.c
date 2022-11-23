#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char nome[15];
	int contagem = 0, contagem2;	
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]s", nome);
	
	while (contagem != strlen(nome)) {
		for (contagem2 = 0; contagem2 <= contagem; contagem2++) {	
		printf("%c", nome[contagem2]);
		}
		printf("\n");
		contagem++;
	}
	return 0;
}
