//Criar um algoritmo que carregue uma matriz 12 x 4 com os valores das vendas de uma
//loja, em que cada linha represente um mês do ano, e cada coluna, uma semana do mês.
//Para fins de simplificação considere que cada mês possui somente 4 semanas. Calcule
//e imprima:
//- Total vendido em cada mês do ano;
//- Total vendido em cada semana durante todo o ano;
//- Total vendido no ano.

#include<stdio.h>
#include<stdlib.h>

#define TOTAL_MESES 12
#define TOTAL_SEMANAS 4

int main() {
	float matrizVendas[TOTAL_MESES][TOTAL_SEMANAS];
	float totalVendidoPorMes, totalVendidoPorSemana, totalVendidoNoAno = 0;
	int mes, semana;

	srand(10);
	for(mes = 0; mes < TOTAL_MESES; mes++) {
		for(semana = 0; semana < TOTAL_SEMANAS; semana++) {
			matrizVendas[mes][semana] = random() % 1000;
		}
	}
	for(mes = 0; mes < TOTAL_MESES; mes++) {
		for(semana = 0; semana < TOTAL_SEMANAS; semana++) {
			printf("%7.2f  ",matrizVendas[mes][semana]);
		}
		printf("\n");
	}
	printf("\n   Total vendido nos meses:\n");
	printf("   Janeiro Fevereiro     Março     Abril      Maio     Junho     Julho    Agosto  Setembro   Outubro  Novembro   Dezembro\n");
	for(mes = 0; mes < TOTAL_MESES; mes++) {
		totalVendidoPorMes = 0;
		for(semana = 0; semana < TOTAL_SEMANAS; semana++) {
			totalVendidoPorMes = totalVendidoPorMes + matrizVendas[mes][semana];
		}
		printf("%10.2f", totalVendidoPorMes);
		totalVendidoNoAno = totalVendidoNoAno + totalVendidoPorMes;
	}
	printf("\n\n   Total vendido por semana nos meses:");
	for(semana = 0; semana < TOTAL_SEMANAS; semana++) {
		totalVendidoPorSemana = 0;
		for(mes = 0; mes < TOTAL_MESES; mes++) {
			totalVendidoPorSemana = totalVendidoPorSemana + matrizVendas[mes][semana];
		}
		printf("\n   Total vendido na %dª semana dos meses: %7.2f", semana + 1, totalVendidoPorSemana);
	}
	printf("\n\n   Total vendido no ano: %.2f", totalVendidoNoAno);
    return 0;
}
