#include <stdio.h>

int main(void) {
  int a = 0, n;

  for (n = 1; n <= 1000; n++)
  {
    a = a + n;
  }
  printf("A soma de todos os números compreendidos de 1 a 1000 é %i", a);

  return 0;
}