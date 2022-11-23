#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char nome[15];
	int contagem = 0;
	
	printf("Digite seu nome: ");
    scanf(" %[^\n]s", nome);
    
    while (contagem != strlen(nome)) {
    	printf("%c\n", nome[contagem]);
    	contagem++;
	}
	return 0;
}
