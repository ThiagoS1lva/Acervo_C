#include <stdio.h>

int main(void) {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	printf("A soma dos numeros pares de 0 a %d foi de %d\n", numero, somaP(numero));

}

int somaP(int n) {
	//não há o que somar
	if (n == 0){
		return 0;
	}
	else{
		//quando for par
		if ((n%2)==0){
			return(n + somaP(n - 1));
		}
		//quando nao for par
		else{
			return (somaP(n - 1));
		}
	}
}
