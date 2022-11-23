#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct idPessoa {
	char nome[5][30], sexo[5][30];
};

int main(int argc, char** argv) {
	
	struct idPessoa vetorPessoas[5];
	int contador, contadorFem, contadorMasc;

	for (contador = 0; contador < 5; contador++){
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", &vetorPessoas[contador].nome);
		printf("Digite seu sexo\nFem para Feminino\nMasc para masculino:");
	scanf(" %[^\n]s", &vetorPessoas[contador].sexo);
	}
	for (contador = 0; contador < 5; contador++){
		if (strcmp(vetorPessoas[contador].sexo, "Fem") == 0) {
			printf("%s", vetorPessoas[contador].nome);
		}
	}
	
	for (contador = 0; contador < 5; contador++){
		if (strcmp(vetorPessoas[contador].sexo, "Masc") == 0){
			printf("%s", vetorPessoas[contador].nome);
		}
	}
	
	return 0;
}
