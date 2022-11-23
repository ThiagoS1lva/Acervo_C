#include <stdio.h>

void quickSort (int *vetorDesordenado, int posicaoInicio, int posicaoFim)
{
   int pivo;
   if (posicaoInicio < posicaoFim) 
   {
      pivo = partir (vetorDesordenado, posicaoInicio, posicaoFim);
      quickSort (vetorDesordenado, posicaoInicio, pivo);
      quickSort (vetorDesordenado, pivo+1, posicaoFim);
   }
}

int partir (int *vetorDesordenado, int posicaoInicio, int posicaoFim)
{
   int x,i,j,auxiliar,fim=0;
   x = vetorDesordenado[posicaoInicio];
   i = posicaoInicio - 1;
   j = posicaoFim + 1;
   
   while (! fim) 
   {
      do 
	  { 
	  	j--; 
	  } while( vetorDesordenado[j] > x );
      do 
	  { 
	  	i++; 
	  } while( vetorDesordenado[i] < x );
      
      if (i < j) 
      {
         auxiliar = vetorDesordenado[i];
         vetorDesordenado[i] = vetorDesordenado[j];
         vetorDesordenado[j] = auxiliar;
      }
      else
      {
         fim = 1;
      }
   }
	return j;
}


void main()
{
	int elementos[10], i, cont;
	
	printf("\n Antes da ordenacao \n");
	cont = 9;
	for (i=0; i<=9; i++)
	{
		elementos[i]=cont;
		printf("\n %d",elementos[i]);
		cont--;
	}
	
	quickSort (elementos, 0, 9);
	
	printf("\n Depois da ordenacao \n");	
	for (i=0; i<=9; i++)
	{
		printf("%d \n",elementos[i]);
	}
	
}

