#include <stdio.h>

int main(void) {
  float alt, peso, ideal;
  char sexo;
  printf("Digite sua altura: ");
  scanf("%f", &alt);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite seu sexo: ");
  scanf(" %c", &sexo);

  if ((sexo == 'h') || (sexo == 'h')) {
    ideal = (72.7 * alt) - 58;
  }
  else {
    if ((sexo == 'm') || (sexo == 'M')) {
      ideal = (62.1 * alt) - 44.7;
    }
  }
  if (peso - 1 > ideal) {
    printf("Você está acima do peso ideal");
  }
  else {
    if ((1 - peso < ideal) && (peso + 1 > ideal)){
      printf("Você está no peso ideal");
    }
    else {
      if (peso + 1 < ideal) {
        printf("Você está abaixo do peso ideal");
      }
    }
  }
  return 0;
}