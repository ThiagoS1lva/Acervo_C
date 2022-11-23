#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char frase[30];
	int contagem = 0, contagemEspaco = 0, contagemVogais = 0;
	
	printf("Digite uma frase: ");
    scanf(" %[^\n]s", frase);
    
    while (contagem != strlen(frase)) {
    	if(frase[contagem] == ' '){
    		contagemEspaco++;
		}
		if (frase[contagem] == 'a' || frase[contagem] == 'e' || frase[contagem] == 'i' || frase[contagem] == 'o' || frase[contagem] == 'u') {
			contagemVogais++;
		}
    	contagem++;
	}
    printf("A frase tem %d espacos e %d vogais.", contagemEspaco, contagemVogais);
	return 0;
}
