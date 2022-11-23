#include <stdio.h>

int main(int argc, char** argv) {
	char sexo;
	float alt, menorAlt = 0, maiorAlt = 0, mediaF, somaAlt = 0, totalF = 0, mediaT, somaAltT = 0, totalA = 0;
	int cont, contt = 0;
	
	for (cont = 1; cont <= 50; cont ++) {
		printf("Qual seu sexo (m) ou (f): \n");
		scanf(" %c", &sexo);
		printf("Qual sua altura: \n");
		scanf("%f", &alt);
		if (contt == 0) {
			maiorAlt = alt;
			menorAlt = alt;
			contt++;
		}	
		if (alt > maiorAlt) {
			maiorAlt = alt;
		}
		else {
			if (alt < menorAlt) {
	 		menorAlt = alt;
	 		}
		}
		if ((sexo == 'f') || (sexo == 'F')) {
			totalF = totalF + 1;
			somaAlt = somaAlt + alt;
			mediaF = somaAlt / totalF;
		}
	totalA = totalA + 1;
	somaAltT = somaAltT + alt;
	mediaT = somaAltT / totalA;
	}
	printf("A media de altura da turma e de  %.2f m \n", mediaT);	
	printf("A media de altura das mulheres e de %.2f m \n", mediaF);
	printf("A maior altura e %.2f m \n", maiorAlt);
	printf("A menor altura e %.2f m \n", menorAlt);
	return 0;
}
