#include <stdio.h>

int main(void) {
	int divisor, dividendo, resto = 0;
	
	printf("Digite o dividendo:");
	scanf("%i", &dividendo);
	printf("Digite o divisor:");
	scanf("%i", &divisor);

	while (dividendo >= divisor) {	
	dividendo = dividendo - divisor;
	}	
	printf("O resto da divisão entre os numeros digitados e %i", dividendo);
	return 0;
}
