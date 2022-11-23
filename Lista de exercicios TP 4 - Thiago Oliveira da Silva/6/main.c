#include <stdio.h>

int main(void) {
  int c= 0, d=0;

  while (c < 1000)
  {
   if ((c%5== 0) || (c%3==0)){
   	d = d + c;   	
   }
   c = c + 1;
  }
	printf("A Soma de todos os numeros multiplos de 5 e 3 de 1 ate 1000 e %i", d);
  return 0;
}
