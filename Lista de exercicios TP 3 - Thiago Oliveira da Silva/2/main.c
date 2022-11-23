#include <stdio.h>

int main(void) {

  float a,b;
  printf("Digite um número: ");
  scanf("%f", &a);
  printf("Digite outro número: ");
  scanf("%f", &b);

  if (a > b) {
    printf("%f é maior que %f", a, b);
  }
  else {
    if (a < b) {
      printf("%f é maior que %f", b ,a);
    }
    else {
      if (a == b) {
        printf("%f é igual à %f", a, b);
      }
    }
  }
  return 0;
}