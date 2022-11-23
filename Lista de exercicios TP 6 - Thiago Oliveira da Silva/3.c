#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char nome[15], nacionalidade[20], sexo[10], pessoaPesada[15], nomeBrasileiraLeve[15];
	float peso, pesoTotal, mediaPeso, contador = 0, pesoMaior, pesoMenorBrasileira, contagem2 = 0;
	
	printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome);
		
	while(strcmp (nome, "SAIR") != 0) {
		contador++;
		printf("Digite sua nacionalidade: ");
		scanf("%s", nacionalidade);
		printf("Digite seu sexo: ");
		scanf("%s", sexo);
		printf("Digite seu peso: ");
		scanf("%f", &peso);
		printf("\n");
		if (peso > pesoMaior) {
			pesoMaior = peso;
			strcpy(pessoaPesada, nome);
		}
		pesoTotal = pesoTotal + peso;
		mediaPeso = pesoTotal / contador;
		if ((contagem2 == 0) && (strcmp(nacionalidade, "Brasileira") == 0)) {
			contagem2++;
			pesoMenorBrasileira = peso;
			strcpy(nomeBrasileiraLeve, nome);
		}
		if ((strcmp(nacionalidade, "Brasileira") == 0) && (peso < pesoMenorBrasileira)) {
			pesoMenorBrasileira = peso;
			strcpy(nomeBrasileiraLeve, nome);
			printf("%.2f", pesoMenorBrasileira);
		}
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome);
	}
	printf("A media de peso total e %.2f kg\n", mediaPeso);
	printf("A pessoa mais pesada e %s\n", pessoaPesada);
	printf("A Brasileira mais leve e %s\n", nomeBrasileiraLeve);
	return 0;
}
