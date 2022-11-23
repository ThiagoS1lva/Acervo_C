#include<stdio.h>

int main() {
	char vetorNomes[5][20];
	int numeroPessoa;

	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("Entre com o nome da pessoa:");
		scanf("%s", vetorNomes[numeroPessoa]);
	}
	printf("**** Pessoas Cadastradas ****\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("%s\n", vetorNomes[numeroPessoa]);
	}
    return 0;
}
