#include <stdio.h>

int main(int argc, char** argv) {
	
	int numero, fatorial = 1;
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	for (numero; numero >= 1; numero--) {
	fatorial = fatorial * numero;	
	}
	printf("O fatorial do numero digitado e %i", fatorial);
	return 0;
}
