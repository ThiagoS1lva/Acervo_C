/*
1) Construa um programa que possua funções recursivas para:
• Calcular a soma dos números pares de 0 a N.
• Calcular a multiplicação dos números ímpares de 1 a N.
*/

#include <stdio.h>

int soma_pares (int n)
{
	if (n == 0)
		return(0);
	else
	  if ((n % 2) == 0)
		return (n + soma_pares (n - 1));
	  else
	    return (soma_pares (n - 1));
}

int multiplica_impares (int n)
{
	if (n == 1)
		return(1);
	else
	  if ((n % 2) != 0)
		return (n * multiplica_impares (n - 1));
	  else
	    return (multiplica_impares (n - 1));
}

void main()
{
	int num, base, expoente;

	printf("Digite um numero : ");
	scanf("%d",&num);
	printf("A soma dos numeros pares de 0 a %d foi %d \n", num, soma_pares(num));
	printf("\nDigite um numero : ");
	scanf("%d",&num);
	printf("O produto dos numeros impares de 1 a %d foi %d \n", num, multiplica_impares(num));
}

