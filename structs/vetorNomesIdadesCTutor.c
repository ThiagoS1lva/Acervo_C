#include<stdio.h>
#include<string.h>

int main() {
	char vetorNomes[5][20];
	int vetorIdades[5];
	int numeroPessoa;

	strcpy(vetorNomes[0],"Ana Maria");
	vetorIdades[0] = 41;
	strcpy(vetorNomes[1],"Bruno");
	vetorIdades[1] = 33;
	strcpy(vetorNomes[2],"Maria");
	vetorIdades[2] = 20;
	strcpy(vetorNomes[3],"Miguel");
	vetorIdades[3] = 15;
	strcpy(vetorNomes[4],"Amanda");
	vetorIdades[4] = 80;

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
