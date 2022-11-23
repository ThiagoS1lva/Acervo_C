#include<stdio.h>

int main() {
	char vetorNomes[5][20];
	int vetorIdades[5];
	int numeroPessoa;

	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("******** Pessoa %d *********\n", numeroPessoa);
		printf("Entre com o nome da pessoa:");
		scanf("%s", vetorNomes[numeroPessoa]);
		printf("Entre com a idade da pessoa:");
		scanf("%d", &vetorIdades[numeroPessoa]);
	}
	printf("\n\n**** Pessoas Cadastradas ****\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("******** Pessoa %d *********\n", numeroPessoa);
		printf("Nome: %s\n", vetorNomes[numeroPessoa]);
		printf("Idade: %d\n", vetorIdades[numeroPessoa]);
	}
	printf("\n\n**** Atualizando as Idades ****\n\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		vetorIdades[numeroPessoa]++;
	}
	printf("\n**** Idades Atualizadas ****\n");
	for (numeroPessoa = 0; numeroPessoa < 5; numeroPessoa++) {
		printf("******** Pessoa %d *********\n", numeroPessoa);
		printf("Nome: %s\n", vetorNomes[numeroPessoa]);
		printf("Idade: %d\n", vetorIdades[numeroPessoa]);
	}
    return 0;
}
