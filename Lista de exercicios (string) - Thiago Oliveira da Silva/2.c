#include <stdio.h>
#include<string.h>

int main() {
	char frase1[30], frase2[30];
	int posicao = 0, diferente = 0;
	
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", frase1);
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", frase2);
	
	while (frase1[posicao] != '\0') {
		if (frase1[posicao] != frase2[posicao]) {
			diferente++;
		}
	posicao++;
	}
	
	if (diferente == 0) {
		printf("As duas frases sao iguais.");
	}
	else {
		printf("As duas frases sao diferentes.");
	}
	return 0;
}
