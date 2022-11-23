#include <stdio.h>

int main(void) {
  float vendas, sFinal;
  printf("Digite o quanto vendeu:");
  scanf("%f", &vendas);

  if (vendas <= 1500) {
    sFinal = 0.03 * vendas;
  }
  else {
    if (vendas > 1500) {
      sFinal = 0.05 * vendas;
    }
  }
  printf("Você terá um aumento de R$ %f mais o seu salários fixo.", sFinal);
  return 0;
}