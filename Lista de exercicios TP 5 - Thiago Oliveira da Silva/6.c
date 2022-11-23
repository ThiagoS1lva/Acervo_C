#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	int numero = 0, positivo; 
	
		while (positivo > 0) {
		printf("Digite um numero: ");
		scanf("%i", &positivo);
		numero = numero + 1;
	}
	printf("Foram digitados %i numeros", numero);
	return 0;
}
