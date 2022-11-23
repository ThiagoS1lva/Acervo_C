#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int matriz[2][5], linha, coluna;
	srand(time(NULL));
	
	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			matriz[linha][coluna] = 150 + rand() % 50;
		}
	}
	printf("Os mais altos de cada delegacao\n");
	printf("1	2	3	4	5\n");
	if(matriz[0][0] > matriz[1][0]){
		printf("%dcm	",matriz[0][0]);
	}
	else {
		printf("%dcm	", matriz[1][0]);
	}
	
	if(matriz[0][1] > matriz[1][1]){
		printf("%dcm	",matriz[0][1]);
	}
	else {
		printf("%dcm	", matriz[1][1]);
	}
	
	if(matriz[0][2] > matriz[1][2]){
		printf("%dcm	",matriz[0][2]);
	}
	else {
		printf("%dcm	", matriz[1][2]);
	}
	
	if(matriz[0][3] > matriz[1][3]){
		printf("%dcm	",matriz[0][3]);
	}
	else {
		printf("%dcm	", matriz[1][3]);
	}
	
	if(matriz[0][4] > matriz[1][4]){
		printf("%dcm	",matriz[0][4]);
	}
	else {
		printf("%dcm	", matriz[1][4]);
	}
	
	return 0;
}
