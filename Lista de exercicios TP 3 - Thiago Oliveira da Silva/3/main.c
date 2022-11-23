#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char a;
  printf("Digite seu sexo \n F para feminino \n M para masculino: ");
  scanf(" %c", &a);

  if ((a=='f') || (a=='F')) {
    printf("Feminino");
  }
  else {
    if ((a=='m') || (a=='M')) {
      printf("Masculino");
    }
    else {
      printf("Sexo inválido");
    }
  }
  return 0;
}