#include <stdio.h>

int main(void) {
  int a, b = 0, c = 0, d = 0, e = 0;
  do
  {
    printf("Bem vindo ao Banco!\n");
    printf("Qual opção você deseja?\n");
    printf("1 - Deposito \n");
    printf("2 - Retirada \n");
    printf("3 - Saldo \n");
    printf("4 - Extrato \n");
    printf("5 - Sair do programa \n");
    scanf("%i", &a);
    printf("\n");
    if (a == 1) {
      b = b + 1;
    }
    else {
      if ( a == 2) { 
        c = c + 1;
      }
      else {
        if (a == 3) {
          d = d + 1;
        }
        else {
          if (a == 4) {
            e = e + 1;
          }
        }
      }
    }
}
  while (a != 5);
  printf("Foi realizada %i operações de deposito \n%i operações de retirada \n%i operações de Saldo \n%i operações de extrato \n", b, c, d, e);
  return 0;
}