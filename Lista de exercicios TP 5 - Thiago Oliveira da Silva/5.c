#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cont, numero, soma = 0, negativo;
	for (cont = 1; cont <= 10; cont++)
	{
		printf("Digite um numero: ");
		scanf("%i", &numero);
		if (numero > 0) {
			soma = soma + numero;
		}
		else {
			negativo = negativo + 1;
		}
	}
	printf("A soma dos numeros positivos e %i e a quantidade de numeros negativos e %i", soma, negativo);
	return 0;
}
