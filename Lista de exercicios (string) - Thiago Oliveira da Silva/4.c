#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char frase[20], caractere;
	int tamanhoPalavra, contagem, contagemLetra = 0;
	
	printf("Digite uma frase: ");
    scanf(" %[^\n]s", frase);
	printf("Digite o caractere a ser buscado:");
	scanf(" %c", &caractere);
	
	tamanhoPalavra = strlen(frase);
	for (contagem = 0; contagem <= tamanhoPalavra; contagem++) {
		if (frase[contagem] == caractere) {
			contagemLetra = contagem;
		}
	}
	if (contagemLetra == 0) {
		printf("Nao encontramos a letra digitada.");
	}
	else {
		printf("A letra digita esta no char %d", contagemLetra);
	}
	return 0;
}
