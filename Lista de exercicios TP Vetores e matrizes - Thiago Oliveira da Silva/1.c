#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	// Ordenar os nomes femininos primeiro e o masculino depois
	
	char nome[200][30], sexo[200][15];	
	int contagem, contagemFem, contagemMasc;

	// "for" para pedir os nomes
	for (contagem = 0; contagem < 200; contagem++) {
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome[contagem]);
		printf("Digite seu sexo\nFem = Feminino\nMasc = Masculino: ");
		scanf(" %[^\n]s", sexo[contagem]);
	}
		
	// "for" para procurar os nomes femininos e coloca-los primeiros
	for (contagemFem = 0; contagemFem < 200; contagemFem++) {
		if (strcmp(sexo[contagemFem], "Fem") == 0) {
			printf("%s\n", nome[contagemFem]);
		}
	}
	
	// "for" para procurar e colocar os nomes masculinos.	
	for (contagemMasc = 0; contagemMasc < 200; contagemMasc++) {
		if (strcmp(sexo[contagemMasc], "Masc") == 0) {
			printf("%s\n", nome[contagemMasc]);	
		}
	}
	return 0;
}
