#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char nome[15], sexo[10];
	int contagemFeminino = 0, contagem, contagemMasculino = 0;
	
	for (contagem = 1; contagem <= 10; contagem ++) {
		printf("Qual seu nome: ");
		scanf("%s", nome);
		printf("Digite seu sexo.\nFeminino ou Masculino: ");
		scanf("%s", sexo);
		if (( strcmp (sexo , "Feminino") == 0) || (strcmp (sexo, "feminino") == 0)) {
			contagemFeminino++;
		}
		else{
			if ((strcmp (sexo, "Masculino") == 0) || (strcmp (sexo, "masculino") == 0)) {
				contagemMasculino++;
			}
		}
	}
	printf("%d Pessoas sao mulheres e %d pessoas sao homens.\n", contagemFeminino, contagemMasculino);
	return 0;
}
