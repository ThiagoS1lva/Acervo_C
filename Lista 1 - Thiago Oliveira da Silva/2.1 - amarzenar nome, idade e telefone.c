#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

 struct regPessoa {
	char nome[30];
	int idade, telefone;
 };
 
int main(int argc, char** argv) {
	struct regPessoa vetorPessoas[100];
	int aux = 0, operacao, aux1, idadeT, telefoneT, x, y, r, auxiliar1;
	char nomeProcurado[100][30], auxiliar[30];
	
	srand(time(NULL));

	// While para pedir os nomes, idades e telefones
	// Usei o [aux -1] para não pular antes de comparar	
	// por motivo de rapidez, deixei a idade e o numero de telefone como aleatorio	
	while ((aux <= 100) && (strcmp(vetorPessoas[aux - 1].nome, "FIM") != 0)) {
	
		printf("Digite o nome:");
		scanf(" %[^\n]s", vetorPessoas[aux].nome);
		vetorPessoas[aux].idade = rand() % 80;
		vetorPessoas[aux].telefone = 99 + rand() % 10;	
		aux++;
		// if para parar o while quando ele não conseguir
		if(strcmp(vetorPessoas[aux - 1].nome, "FIM") == 0){
			break;
		}	
	}

	//Aqui começa as operacoes
	do
	{		
		printf("As operacoes sao:\n1 - Alterar a idade e o telefone de uma pessoa\n2 - Organizar em ordem alfabetica os dados das pessoas\n3 - Pesquisar idade e o telefone da pessoa\n4 - Exibir os dados totais das pessoas");
		printf("\nDigite 5 para terminar:\n");
		printf("\n\nEscolha qual operacao quer fazer:");
		scanf("%d", &operacao);	
		// escolher as operacoes
		switch (operacao){
			
		case 1: 	
			printf("Digite o nome para alterar a idade e o telefone: ");
			scanf(" %[^\n]s", nomeProcurado[1]);
			
			//for para procurar os nomes iguais
			for (aux1 = 0; aux1 <= 100; aux1++){
				//if para comparar os nomes
				if(strcmp(vetorPessoas[aux1].nome, nomeProcurado[1]) == 0){
					printf("Digite uma nova idade:");
					scanf("%d", &idadeT);
					//trocar idades
					vetorPessoas[aux1].idade = idadeT;
					printf("Digite um novo numero:");
					//trocar telefone
					scanf("%d", &telefoneT);
					vetorPessoas[aux1].telefone = telefoneT;
				}
			}	
		break;

		// x, y são auxiliares para a comparação
		//r vai retornar o valor de comparação para saber qual é maior
		case 2:
			for (x = 0; x<= aux; x++){
				for (y = x+1; y <= aux; y++){
					// compara um nome com o proximo para saber qual deve ficar na frente ou atras e retorna em numero
					r = strcmp(vetorPessoas[x].nome,(vetorPessoas[y].nome));
					if (r > 0){
						strcpy(auxiliar, vetorPessoas[x].nome);
						strcpy(vetorPessoas[x].nome, vetorPessoas[y].nome);
						strcpy(vetorPessoas[y].nome, auxiliar);
						
						//ordenar idades
						auxiliar1 = vetorPessoas[x].idade;
						vetorPessoas[x].idade = vetorPessoas[y].idade;
						vetorPessoas[y].idade = auxiliar1;
						auxiliar1 = 0;
						
						//ordenar telefone
						auxiliar1 = vetorPessoas[x].telefone;
						vetorPessoas[x].telefone = vetorPessoas[y].telefone;
						vetorPessoas[y].telefone = auxiliar1;
					}
				}	
			}
			break;
		
		case 3:	
			printf("Digite o nome para ver a idade e o telefone: ");
			scanf(" %[^\n]s", nomeProcurado[1]);
			
			//for para procurar os nomes iguais
			for (aux1 = 0; aux1 <= 100; aux1++){
				//if para comparar os nomes
				if(strcmp(vetorPessoas[aux1].nome, nomeProcurado[1]) == 0){
					printf("idade:%d\n", vetorPessoas[aux1].idade);
					printf("numero:%d\n", vetorPessoas[aux1].telefone);
				}
			}	
			
			break;
		
		case 4:
			// mostra todos os dados
			for (aux1 = 0; aux1 < aux - 1; aux1++){
				printf("nome: %s\n", vetorPessoas[aux1].nome);
				printf("idade: %i\n", vetorPessoas[aux1].idade);
				printf("telefone: %i\n", vetorPessoas[aux1].telefone);
				printf("\n");
			}
		break;


		}		
	}
	while(operacao != 5);
		
return 0;
}




