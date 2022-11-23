#include <stdio.h>
#include <string.h>

int main() {
	char nome[15], pessoaAlta[15];
	float somaAltura = 0, altura, mediaAltura, contagem, alturaBaixa, alturaAlta;
	
	for (contagem = 1; contagem <= 20; contagem++) {
		printf("Digite seu nome: ");
		scanf(" %[^\n]s", nome);
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		somaAltura = somaAltura + altura;
		mediaAltura = somaAltura / contagem;	
		if (contagem == 1){
			alturaBaixa = altura;
			alturaAlta = altura;
			strcpy(pessoaAlta, nome);
		}
		if (altura > alturaAlta){
			alturaAlta = altura;
			strcpy(pessoaAlta, nome);
		}
		else {
			if (altura < alturaBaixa) {
				alturaBaixa = altura;
			}
		}
	}
	printf("A media das alturas e de %.2f metros\n", mediaAltura);
	printf("A altura mais baixa e %.2f metros e a altura mais alta e %.2f metros.\n", alturaBaixa, alturaAlta);
	printf("A pessoa mais alta e %s \n", pessoaAlta);
	return 0;
}
