#include <stdio.h>

int main(void) {

  float salario, reajuste, _final;

  printf("Digite o seu salario mensal:");
  scanf("%f", &salario);

  printf("Digite o percentual de reajuste do seu salario: ");
  scanf("%f", &reajuste);

  _final = salario + salario * reajuste / 100;

  printf("O seu novo salario é: %f", _final);


  return 0;
}