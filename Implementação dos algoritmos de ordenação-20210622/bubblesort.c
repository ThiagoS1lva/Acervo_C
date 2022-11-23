#include <stdio.h>
#include <stdlib.h>

int elementos[10];

void main ()
{
	int i, j, auxiliar, cont;

    printf("\n Antes da ordenacao \n");
	cont = 9;
	for (i=0; i<=9; i++)
	{
		elementos[i]=cont;
		printf("\n %d",elementos[i]);
		cont--;
	}
	
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=8;j++)
		{
			/* Caso o elemento de uma posição menor seja maior que 
   			um elemento de uma posição maior, faz a troca. */
			if (elementos[j] > elementos[j+1])
			{
				auxiliar = elementos[j];
				elementos[j] = elementos[j+1];
				elementos[j+1] = auxiliar;
			}
		}
	}

    printf("\n Depois da ordenacao \n");	
	for (i=0;i<=9;i++)
	{
		printf("%d \n",elementos[i]);
	}		
}

