/*
1) Construa um programa que possua funções recursivas para:
• Calcular a soma dos números de 1 a N.
• Calcular a sequência de Fibonacci do elemento N.
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
Fibonacci (0) = 0
Fibonacci (1) = 1
Fibonacci (n) = Fibonacci (n-1) + Fibonacci (n-2)
*/


#include <stdio.h>

int soma (int n)
{
	if (n == 1)
		return(1);
	else
		return (n + soma (n - 1));
}

int fibonacci (int n)
{
	if (n == 0)
		return(0);
	else
		if (n == 1)
			return(1);
		else
			return (fibonacci(n - 1) + fibonacci(n - 2));
}

void main()
{
	int num;

	printf("Digite um numero : ");
	scanf("%d",&num);
	printf("A soma dos numeros de 1 a %d foi %d \n", num, soma(num));
	printf("Digite um numero : ");
	scanf("%d",&num);
	printf("A sequencia de Fibonacci do elemento %d foi %d \n", num, fibonacci(num));
}

