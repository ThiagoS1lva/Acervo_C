#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char frase[30], frase2[30], guia;
	int contagem = 0, tamanhoFrase = 0, contagem2;
	
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", frase);
	tamanhoFrase = strlen(frase);
	
    while(contagem != tamanhoFrase) {
    	if (frase[contagem] == ' ' ) {
    		for (contagem2 = contagem; contagem2 < tamanhoFrase; contagem2++) {
				frase[contagem2] = frase[contagem2 + 1];
			}
        }
    contagem++;
    }
   printf("%s", frase);
	return 0;
}
