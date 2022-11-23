#include <stdio.h>

int main(void) {
  int a, n0, n;
  printf("Digite a quantidade de números somados:");
  scanf("%i", &n);

  for (n0 = 1; n0 <= n; n0++)
  {
    a = a + n0;
  }
  printf("O somatório dos números é igual a %i", a);
  return 0;
}