#include <stdio.h>

int main(void) {
	int limS, limI, numero, soma = 0;
	printf("Digite o limite inferior: ");
	scanf("%i", &limI);
	printf("Digite o limite superior: ");
	scanf("%i", &limS);
	
	for (numero = limI; numero <= limS; numero++)
	{	
		if(numero%2 == 0) {
			printf("%i\n", numero);
			soma = soma + numero;
		}
	}
	printf("O somatorio dos numeros pares e %i\n", soma);
	return 0;
}
