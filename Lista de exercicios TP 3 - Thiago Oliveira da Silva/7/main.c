#include <stdio.h>

int main(void) {
  char a;
  printf("Digite uma letra: ");
  scanf("%c", &a);

  if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u')) {
    printf("É uma vogal!");
  }
  else {
    printf("É um consoante");
  }

  return 0;
}