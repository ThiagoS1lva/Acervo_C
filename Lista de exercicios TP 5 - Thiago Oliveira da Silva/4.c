#include <stdio.h>

int main(void) {
	int cont, numero, par = 0, impar = 0;
	
	for (cont = 1; cont <= 20; cont++) {
		printf("Digite um numero: ");
		scanf("%i", &numero);
		if (numero%2 == 0) {
			par = par + 1;
		}
		else {
			impar = impar + 1;
		}
	}
	printf("Sao %i numeros pares e %i numeros impares", par, impar);
	return 0;
}
