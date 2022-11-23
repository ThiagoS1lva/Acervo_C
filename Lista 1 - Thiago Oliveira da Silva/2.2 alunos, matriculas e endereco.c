#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct regAlunos {
	int matricula;
	char nome[30], endereco [30];
	
};
int main(int argc, char** argv) {
	struct regAlunos vetorAlunos[1000], aux2[30];
	int contagem = 1, maEscolhida, operacao, aux, x, y, aux1, mPesquisado, posicao, MAtricula[4];
	srand(time(NULL));
	
	// digitar "fim" para sair do do...while
	while (contagem <= 1000) {
		printf("Digite o nome do aluno: ");
		scanf(" %[^\n]s", vetorAlunos[contagem].nome);
			if (strcmp(vetorAlunos[contagem].nome, "fim") == 0){
			break;
		}
		printf("Digite o endereco do aluno: ");
		scanf(" %[^\n]s", vetorAlunos[contagem].endereco);
		vetorAlunos[contagem].matricula = rand() % 100;
		contagem++;
	}
	do{
		printf("---- Menu da escola ----\n");
		printf("Digite:\n");
		printf("1 - Para alterar o endereco do aluno.\n");
		printf("2 - Para organizar em crescente de matricula os dados dos alunos.\n");
		printf("3 - Pesquisar o nome e o endereço de um aluno.\n");
		printf("4 - Exibir os dados de todos os alunos.\n");
		printf("5 - Para sair\n");
		scanf("%d", &operacao);
		
		switch (operacao){
			case 1: {
				printf("Digite a matricula do aluno: ");
				scanf("%d", &maEscolhida);
				//procura a matricula escolhida em todo os dados e quando acha pede para o usuario substituir com a nova
				for (aux = 1; aux <= contagem; aux++){
					if(maEscolhida == vetorAlunos[aux].matricula){
						printf("Digite um novo endereço: ");
						scanf(" %[^\n]s", vetorAlunos[aux].endereco);
					}
				}
				break;
			}
			case 2: {
				for (x = 1; x<= contagem; x++){
					for(y = x + 1; y <= contagem; y++){
						// oara ordenar um a um
						if (vetorAlunos[x].matricula > vetorAlunos[y].matricula){
							//as matriculas
							aux1 = vetorAlunos[x].matricula;
							vetorAlunos[x].matricula = vetorAlunos[y].matricula;
							vetorAlunos[y].matricula = aux1;
							// os nomes
							strcpy(aux2, vetorAlunos[x].nome);
							strcpy(vetorAlunos[x].nome, vetorAlunos[y].nome);
							strcpy(vetorAlunos[y].nome, aux2);
							// os endereços
							strcpy(aux2, vetorAlunos[x].endereco);
							strcpy(vetorAlunos[x].endereco, vetorAlunos[y].endereco);
							strcpy(vetorAlunos[y].endereco, aux2);
						}
					}
				}
				break;
			}
			case 3: {
				for (aux = 1; aux <= contagem; aux++){
				MAtricula[aux] = vetorAlunos[aux].matricula;
				}
				printf("digite a matricula do aluno desejado: ");
				scanf("%d", &mPesquisado);
				posicao = buscaBinaria (mPesquisado, contagem, MAtricula);
				if (posicao == -1){
					printf("A matricula nao foi encontada");
				}
				else {
				printf("Nome do aluno: %s\n", vetorAlunos[posicao].nome);
				printf("Endereco do aluno: %s\n", vetorAlunos[posicao].endereco);
				}
				break;
			}
			
			case 4: {
				//for e printf para mostrar todos os dados de todos os alunos
				for (aux = 1; aux <= contagem; aux++){
					printf("aluno: %s\n", vetorAlunos[aux].nome);
					printf("matricula: %d\n", vetorAlunos[aux].matricula);
					printf("endereço: %s\n", vetorAlunos[aux].endereco);
					printf("\n");
				}
				break;
			}
		}
		
	}while (operacao != 5);
	return 0;
}

int buscaBinaria (int procurado, int n, int vetor[]) 
{
   int esq, meio, dir, posicao;
   esq = 0; 
   dir = n-1;
   posicao = -1;
   while (esq <= dir) 
  { 
      meio = (esq + dir)/2; 
      if (vetor[meio] == procurado) 
	  posicao = meio;
      if (vetor[meio] < procurado) 
		esq = meio + 1;
      else
		dir = meio - 1;
   }
   return (posicao);
}
