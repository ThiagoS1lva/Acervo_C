#include <stdio.h>

int main(void) {
  int ano, a;
  printf("Digite o ano: ");
  scanf("%i", &ano);



  if (((ano % 4 == 0) && (ano % 400 == 0)) ||(ano % 100 != 0)) {
    printf("Ano bissexto");
  }
  else {
    printf("Ano não bissexto");
    
  }
  return 0;
}