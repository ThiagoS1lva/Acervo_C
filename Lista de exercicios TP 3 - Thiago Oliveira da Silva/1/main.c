#include <stdio.h>

int main(void) {

  float a,c;
  printf("Digite um número: ");
  scanf("%f", &a);

  if (a > 0) {
    printf("Número positivo!");
  }
  else {
    if (a < 0) {
    printf("Número negativo");
  }
    else {
      if (a == 0) {
        printf("Número neutro");
      }
    }
  }
  return 0;
}