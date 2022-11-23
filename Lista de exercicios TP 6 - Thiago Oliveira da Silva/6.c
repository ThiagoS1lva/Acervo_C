#include <stdio.h>
#include <string.h>

int main() {
	char nome[15], nome2[15];
	int  tamanhoNome, tamanhoNome2, contagem, maiorNome = 0;
	
	for (contagem = 1; contagem <= 2; contagem ++){
	printf("Digite seu nome: ");
	scanf("%s", nome);
	tamanhoNome = strlen(nome);	
	printf("O nome %s tem %d letras\n", nome, tamanhoNome);
	
		if (tamanhoNome > maiorNome) {
			maiorNome = tamanhoNome;
		}
	}
	printf("O Maior nome tem %d letras. \n", maiorNome);
	return 0;
}
