#include <stdio.h>

int main(void) {
  int idade;
  printf("Digite sua idade: ");
  scanf("%i", &idade);

  if ((idade >= 5) && (idade <= 7)) {
    printf("Infatil A");
  }
  else {
    if ((idade >= 8) && (idade <= 10)) {
      printf("Infantil B");
    }
    else {
      if ((idade >= 11) && (idade <= 13)) {
        printf("Juvenil A");
      }
      else {
        if ((idade >= 14) && (idade <= 17 )) {
          printf("Juvenil B");
        }
        else {
          printf("Maiores de 18 anos");
        }
      }
    }
  }



  return 0;
}