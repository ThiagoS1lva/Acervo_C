#include <stdio.h>

int main(int argc, char** argv) {
	int media = 0, numero, somaP = 0, maiornumeropar = 0, somaI = 0, mediaI = 0, menornumeroimpar = 0, cont = 0, contt = 0, x = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%i", &numero);
		if (numero < 0) {
			break;
		}
		if (numero%2 == 0) {
			somaP = somaP + numero;
			cont = cont + 1;
			if (numero > maiornumeropar) {
				maiornumeropar = numero;
			}
			media = somaP / cont;
		}
		if (numero%2 != 0) {
			somaI = somaI + numero;
			contt = contt + 1;
			if (x == 0) {
				menornumeroimpar = numero;
				x++;
			}
			if (numero < menornumeroimpar) {
				menornumeroimpar = numero;
			}
			mediaI = somaI / contt;
		}
	}	
	while (1);
	printf("A media dos numeros pares e %i \nO maior numero par e %i \nA media dos numeros impares e %i \nO menor numero impar e %i", media, maiornumeropar, mediaI, menornumeroimpar);
	return 0;
}
