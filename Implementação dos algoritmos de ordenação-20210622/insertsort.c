#include <stdio.h>
#include <stdlib.h>

void main ()
{
	int i, j, auxiliar, cont;
	int elementos[10];

    printf("\n Antes da ordenacao \n");
	cont = 9;
	for (i=0; i<=9; i++)
	{
		elementos[i]=cont;
		printf("\n %d",elementos[i]);
		cont--;
	}
	
	for (i=1; i<=10; i++)
	{
		auxiliar = elementos[i];
		j = i - 1;
		/* Puxa os valores até encontrar a posição correta. */
		while ((j >= 0) && (auxiliar < elementos[j]))
		{
			elementos[j + 1] = elementos[j];
			j = j - 1;
		}
		/* Coloca o valor na posição correta. */
		elementos[j + 1] = auxiliar;
	}
	
	printf("\n Depois da ordenacao \n");
	for (i=0; i<=9; i++)
	{
		printf("%d \n",elementos[i]);
	}		
}

