#include <stdio.h>

int main(void) {
  float b , a, n;

  for (n = 1; n <= 10; n++)
  {
    printf("Digite um número: ");
    scanf("%f", &a);
    b = b + a;
  }
  printf("A soma dos números digitados é %.2f", b);

  return 0;
}