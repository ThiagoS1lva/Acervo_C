#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct regAlunos{
	char nome[20];
	float nota1, nota2, mediaAluno;
	int matricula;
};
int main(int argc, char** argv) {
	struct regAlunos vetorAlunos[10];
	int contagem, codDisciplina = 1;
	srand(time(NULL));
	
	for (contagem = 0; contagem < 10; contagem++){
		printf("Digite o nome do aluno: ");
		scanf(" %[^\n]s", vetorAlunos[contagem].nome);
		vetorAlunos[contagem].nota1 = rand() % 10;
		vetorAlunos[contagem].nota2 = rand() % 10;
		vetorAlunos[contagem].mediaAluno = (vetorAlunos[contagem].nota1 * 1 + vetorAlunos[contagem].nota2 * 2) / 3;
		vetorAlunos[contagem].matricula = 111 + rand() % 888;
	}
	printf("Cod. Materia	Matricula   Aluno	Media das notas\n");
	for (contagem = 0; contagem < 10; contagem++){
		printf("	%d	  %d	  	%s		%.2f\n", codDisciplina, vetorAlunos[contagem].matricula, vetorAlunos[contagem].nome, vetorAlunos[contagem].mediaAluno);
	}
	
	return 0;
}
