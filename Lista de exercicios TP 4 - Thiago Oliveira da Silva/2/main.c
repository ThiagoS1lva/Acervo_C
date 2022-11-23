#include <stdio.h>

int main(void) {
  float a, b, n = 0;

  while (n <= 100)
  {
    printf("Digite um número: ");
    scanf("%f", &a);
    b = b + a;
    n = n + 1;
  }
  printf("A Soma de todos os números é %.2f", b);

  return 0;
}