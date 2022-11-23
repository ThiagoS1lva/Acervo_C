#include <stdio.h>
#include <math.h>


int main(void) {

  float peso, alt, imc;

  printf("Insira seu peso em kg:");
  scanf("%f", &peso);

  printf("Insira sua altura em metros: ");
  scanf("%f", &alt);

  imc = peso / pow(alt, 2);

  printf("%f", imc);
  
  return 0;

}