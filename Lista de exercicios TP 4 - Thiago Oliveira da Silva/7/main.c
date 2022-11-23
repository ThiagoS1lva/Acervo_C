#include <stdio.h>

int main(void) {
  int a,b,n =0, c;

  printf("Digite um número:");
  scanf("%i", &a);
  printf("Digite outro numero: ");
  scanf("%i", &b);

  for (c = 1; c <= a; c++)
  {
    n = n + b;
  }
  printf("Os números digitados multiplicado é %i\n", n);
  return 0;
}