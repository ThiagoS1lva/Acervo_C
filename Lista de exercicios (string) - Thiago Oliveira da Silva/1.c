#include <stdio.h>

int main(int argc, char** argv) {
	char frase[30];
	int tamanhoFrase = 0;
	
	printf("Digite uma frase: ");
	scanf("%30[^\n]s", frase);
	
    while (frase[tamanhoFrase] != '\0') {
        tamanhoFrase++;
    }
	printf("O tamanho da frase e %d", tamanhoFrase);
	return 0;
}

