#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char palavra[30], segundaPalavra[30];
	int tamanhoPalavra1, tamanhoPalavra2;
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite outra palavra: ");
	scanf("%s", segundaPalavra);
	tamanhoPalavra1 = strlen(palavra);
	tamanhoPalavra2 = strlen(segundaPalavra);
	if (tamanhoPalavra1 < tamanhoPalavra2) {
		printf("A menor palavra e %s", palavra);
	}
	else {
		if (tamanhoPalavra1 == tamanhoPalavra2) {
			printf("As palavras sao do mesmo tamanho.");
		}
		else {
			printf("A menor palavra e %s", segundaPalavra);
		}
	}
	return 0;
}
