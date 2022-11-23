#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char** argv) {
	int operacao;
  float quadrado,aQuadrado, triangulo, retangulo, circulo, baseR, altR, aRetangulo, baseT, altT, aTriangulo,aCirculo, raio;
  const float PI = 3.1415;
  do
  {
  	printf("\n");
    printf("Bem vindo a calculadora de figuras geometricas!\n");
    printf("Qual figura voce deseja? \n");
    printf("1 - Area do quadrado \n");
    printf("2 - Area do retangulo \n");
    printf("3 - Area do triangulo \n");
    printf("4 - Area do circulo \n");
    printf("5 - Sair do programa \n");
    scanf("%d", &operacao);
    printf("\n");
    switch (operacao) {
    case 1 :
    	printf("Digite o lado do quadrado:");
    	scanf("%f", &quadrado);
    	aQuadrado = pow(quadrado, 2);
    	printf("A area do quadrado e %.2f\n", aQuadrado);
    	break;
    case 2 :
    	printf("Digite a base do retangulo:");
    	scanf("%f", &baseR);
    	printf("Digite a altura do retangulo:");    
		scanf("%f", &altR);	
		aRetangulo = baseR * altR;
		printf("A area do retangulo e de %.2f\n", aRetangulo);
		break;
	case 3 :
		printf("Digite a base do triangulo:");
		scanf("%f", &baseT);
		printf("Digite a altura do triangulo:");
		scanf("%f", &altT);
		aTriangulo = (baseT * altT) / 2;
		printf("A area do triangulo e de %.2f", aTriangulo);
		break;
	case 4 :
		printf("Digite o raio do circulo: ");
		scanf("%f", &raio);
		aCirculo = raio * pow(PI, 2);
		printf("A area do circulo e de %.2f", aCirculo);
	}
  }
  while (operacao != 5);
  return 0;
}
