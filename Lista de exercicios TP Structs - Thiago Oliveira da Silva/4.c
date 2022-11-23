#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct regPessoa{
	char nome[30];
	int idade;
};
int main(int argc, char** argv) {
	struct regPessoa vetorPessoas[30];
	int contador, somaIdade;
	float mediaIdade;
	srand(time(NULL));
	
	for (contador = 0; contador < 30; contador++){
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", &vetorPessoas[contador].nome);
		vetorPessoas[contador].idade = rand() % 80;
		somaIdade = somaIdade + vetorPessoas[contador].idade;
	} 
	mediaIdade = somaIdade / contador;
	printf("As pessoas que ficaram acima da media foram:\n");
	for (contador = 0; contador < 30; contador++){
		if (vetorPessoas[contador].idade > mediaIdade){
			printf("%s\n", vetorPessoas[contador].nome);
		}
	}
	return 0;
}
