#include <stdio.h>
#include <string.h>

int main(void) {
	char sexo, resposta;
	int s = 0, n = 0, femsim = 0, mascnao = 0;
	float percentfem, percentmasc, cont;
	
	for (cont = 1; cont <= 2000; cont ++) {
		printf("\nDigite seu sexo\nM para masculino \nF para feminino. : ");
		scanf(" %c", &sexo);
		printf("Gostou do produto (s) ou (n): ");
		scanf(" %c", &resposta);
		if (resposta == 's') {
			s = s + 1;
		}
		else {
			if (resposta == 'n') {
				n = n + 1;
			}
		}
		if ((sexo == 'f') && (resposta == 's')) {
			femsim = femsim + 1;
		}
		else {
			if ((sexo == 'm') && (resposta == 'n')) {
				mascnao = mascnao + 1;
			}
		}
	}
	if (s == 1000) {
		printf("Produto indiferente\n");
	}
	else {
		if (s < 1000) {
		printf("Produto reprovado\n");
		}
		else {
			if (s > 1000) {
			printf("Produto aprovado\n");	
			}
		}
	}
	printf("Quantidade de pessoas que responderam sim: %i\n", s);
	printf("Quantidade de pessoas que respoderam nao: %i\n", n);
	percentfem = (femsim / 2000.0) * 100;
	printf("A porcetagem de pessoas do sexo feminino que respondeu sim foi de %.2f por cento\n", percentfem);
	percentmasc = (mascnao / 2000.0) * 100;
	printf("A porcetagem de pessoas do sexo masculino que respondeu nao foi de %.2f por cento", percentmasc);
	return 0;
}
