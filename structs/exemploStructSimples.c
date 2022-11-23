#include<stdio.h>
#include<string.h>

struct regPessoa{
	char nome[10];
	int idade;
};

int main() {
	struct regPessoa pessoa1, pessoa2;
	int numeroPessoa;

	strcpy(pessoa1.nome,"Ana Maria");
	pessoa1.idade = 41;
	strcpy(pessoa2.nome,"Adalberto");
	pessoa2.idade = 20;

	printf("Nome: %s\n", pessoa1.nome);
	printf("Idade: %d\n\n", pessoa1.idade);

	printf("Nome: %s\n", pessoa2.nome);
	printf("Idade: %d\n", pessoa2.idade);

	pessoa2 = pessoa1;

	printf("-------- Após a atribuição de um struct para outro --------\n");

	printf("Nome: %s\n", pessoa1.nome);
	printf("Idade: %d\n\n", pessoa1.idade);

	printf("Nome: %s\n", pessoa2.nome);
	printf("Idade: %d\n", pessoa2.idade);

	printf("-------- Após a atribuição de uma nova idade para a pessoa 1 --------\n");

	pessoa1.idade = 999;

	printf("Nome: %s\n", pessoa1.nome);
	printf("Idade: %d\n\n", pessoa1.idade);

	printf("Nome: %s\n", pessoa2.nome);
	printf("Idade: %d\n", pessoa2.idade);

    return 0;
}
