#include <stdio.h>

int main(void) {
	
	int numero;
	for (numero; numero <= 100; numero++)
	{
		if (numero%2 != 0) {
			printf("%i\n", numero);
		}
	}
	return 0;
}
