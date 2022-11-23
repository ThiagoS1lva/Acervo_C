#include <stdio.h>

int fatorial (int n)
{
	if ((n == 0) || (n == 1))
		return(1);
	else
		return (n * fatorial (n - 1));
}

void main()
{
	int num;
	printf("Digite um número : ");
	scanf("%d",&num);
	printf("%d", fatorial(num));
}

