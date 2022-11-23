#include <stdio.h>
#include <conio.h>

int main(void) {
  int operacao;
  float deposito, retirada, total = 0, saldo;
  do
  {
    printf("Bem vindo ao Banco!\n");
    printf("Qual operacao voce deseja?\n");
    printf("1 - Deposito \n");
    printf("2 - Retirada \n");
    printf("3 - Saldo \n");
    printf("4 - Extrato \n");
    printf("5 - Sair do programa \n");
    scanf("%d", &operacao);
    printf("\n");
    switch (operacao) {
    case 1 :
    	printf("Quanto deseja depositar: ");
    	scanf("%f", &deposito);
    	total = total + deposito;
    	break;
    	
	case 2 :
      	printf("Quanto deseja retirar: ");
      	scanf("%f", &retirada);
      	total = total - retirada;
      	break;

    case 3 :
    	printf("O seu saldo e %.2f\n", total);
    	break;
    	
    	default:
    		printf("operação invalida\n");
	}
  }
  while (operacao != 5);
  return 0;
}
