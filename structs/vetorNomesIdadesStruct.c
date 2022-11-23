#include<stdio.h>
#include<string.h>

struct regPessoa{
	char nome[20];
	int idade;
};

int main() {
	struct regPessoa vetorPessoas[5];
	int numeroPessoa;

	strcpy(vetorPessoas[0].nome,"Ana Maria");
	vetorPessoas[0].idade = 41;
	strcpy(vetorPessoas[1].nome,"Bruno");
	vetorPessoas[1].idade = 33;
	strcpy(vetorPessoas[2].nome,"Maria");
	vetorPessoas[2].idade = 20;
	strcpy(vetorPessoas[3].nome,"Miguel");
	vetorPessoas[3].idade = 15;
	strcpy(vetorPessoas[4].nome,"Amanda");
	vetorPessoas[4].idade = 80;

	printf("\n\n**** Pessoas Cadastradas ****\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("******** Pessoa %d *********\n", numeroPessoa);
		printf("Nome: %s\n", vetorPessoas[numeroPessoa].nome);
		printf("Idade: %d\n", vetorPessoas[numeroPessoa].idade);
	}
	printf("\n\n**** Atualizando as Idades ****\n\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		vetorPessoas[numeroPessoa].idade++;
	}
	printf("\n**** Idades Atualizadas ****\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("******** Pessoa %d *********\n", numeroPessoa);
		printf("Nome: %s\n", vetorPessoas[numeroPessoa].nome);
		printf("Idade: %d\n", vetorPessoas[numeroPessoa].idade);
	}
    return 0;
}
