#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct regAtletas{
	char nome[10];
	int altura;
};

int main(int argc, char** argv) {
	struct regAtletas vetorAtletas[2][5];
	int linha, coluna;
	srand(time(NULL));
	
	for (linha = 0; linha < 2; linha++){
		for (coluna = 0; coluna < 5; coluna++){
			printf("Digite o nome do atleta: ");
			scanf(" %[^\n]s", vetorAtletas[linha][coluna].nome);
			vetorAtletas[linha][coluna].altura = 150 + rand() % 50;
		}
		printf("\n");
	}
	for (linha = 0; linha < 2; linha ++){
		for (coluna = 0; coluna < 5; coluna++){
			printf("%dcm ", vetorAtletas[linha][coluna].altura);
		}
		printf("\n");
	}

	printf("Os mais altos de cada delegacao\n");
	printf("1	2	3	4	5\n");
	if(vetorAtletas[0][0].altura > vetorAtletas[1][0].altura){
		printf("%s	",vetorAtletas[0][0].nome);
	}
	else {
		printf("%s	", vetorAtletas[1][0].nome);
	}
	//----------------------//
	
	if(vetorAtletas[0][1].altura > vetorAtletas[1][1].altura){
		printf("%s	",vetorAtletas[0][1].nome);
	}
	else {
		printf("%s	", vetorAtletas[1][1].nome);
	}
	//----------------------//
	
	if(vetorAtletas[0][2].altura > vetorAtletas[1][2].altura){
		printf("%s	",vetorAtletas[0][2].nome);
	}
	else {
		printf("%s	", vetorAtletas[1][2].nome);
	}
	//----------------------//
	
	if(vetorAtletas[0][3].altura > vetorAtletas[1][3].altura){
		printf("%s	",vetorAtletas[0][3].nome);
	}
	else {
		printf("%s	", vetorAtletas[1][3].nome);
	}
	//----------------------//
	
	if(vetorAtletas[0][4].altura > vetorAtletas[1][4].altura){
		printf("%s	",vetorAtletas[0][4].nome);
	}
	else {
		printf("%s	", vetorAtletas[1][4].nome);
	}
	
	return 0;
}
