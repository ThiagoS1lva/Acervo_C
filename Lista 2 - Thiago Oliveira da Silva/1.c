#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// struct com os codigo, preço e nome dos produtos e o ponteiro proximo.
struct regProduto{
	int codigo, preco;
	char nome[30];
	struct regProduto *proximo;
};
typedef struct regProduto regP;


//-------------------------------------------------------------------------

//armazena um espaço na memoria usando o malloc
regP* armazenar_produto(){
	regP *novo =(regP*)malloc(sizeof(regP));
	return novo; 
}

//-------------------------------------------------------------------------
// usa a funçao "armazenar" para disponibilizar espaço na memoria
regP* inserir_inicio(regP* lista, int codigo){
	regP *novo_codigo = armazenar_produto();
	novo_codigo->codigo = codigo;	
	
	//coloca o codigo no começo da lista se ela estiver vazia
	if(lista == NULL) {
		lista = novo_codigo;
		novo_codigo->proximo = NULL;
	}
	//se nao estiver vazia coloca antes do "primeiro" numero
	else {
		novo_codigo->proximo = lista;
		lista = novo_codigo;
	}
	return lista;
}

//*-------------------------------------------------------------------------

//usa a funçao "armazenar" para disponibilizar espaço na memoria
regP* inserir_final(regP* lista, int codigo, int preco){
	regP *novo_codigo = armazenar_produto();
	novo_codigo->codigo = codigo;
	
	regP *novo_preco = armazenar_produto();
	novo_preco->preco = preco;
	
	if (lista == NULL){
		novo_preco->proximo = NULL;
		lista = novo_preco;
	}
	else {
		regP* aux1 = lista;
		while(aux1->proximo != NULL){
			aux1 = aux1->proximo;
		}
		novo_preco->proximo = NULL;
		aux1->proximo = novo_codigo;
	}
	
	//verifica se há algum codigo na lista
	if(lista == NULL){
		novo_codigo->proximo = NULL;
		lista = novo_codigo;
	}
	// se não tiver, cria um auxiliar, auxiliar vai ser igual a lista para poder saber qual é o ultimo codigo da lista e assim colocar o novo codigo na frente do antigo.
	else{
		regP* aux1 = lista;
		while(aux1->proximo != NULL){
			aux1 = aux1->proximo;
		}
		novo_codigo->proximo = NULL;
		aux1->proximo = novo_codigo;
	}
	return lista;
}

//-------------------------------------------------------------------------

void exibir_lista(regP* lista){
	regP *aux=lista;
	// emquanto aux for diferente de NULL, ele exibirá os elemtnos na lista.
	while(aux!=NULL){
		printf("%d ", aux->codigo);
		printf("\npreço: %d ", aux->preco);
		aux= aux->proximo;	
	}
	
}
//-------------------------------------------------------------------------
int main() {
	int escolha, cod, prec;
	regP *lista=NULL;
	regP* aux1 = lista;
	do {
		printf("\n1- Inserir codigo no inicio:\n");
		printf("2- Inserir codigo e preco no final:\n");
		printf("5- Para exibir a lista:\n");
		printf("\nDigite um valor: ");
		scanf("%d",&escolha);
		switch (escolha) {
			case 1:{
				printf("Digite um codigo:");
				scanf("%d", &cod);
				lista = inserir_inicio(lista, cod);
			break;
			}
			case 2:{
				printf("Digite um codigo: ");
				scanf("%d", &cod);
				printf("Digite o preco: ");
				scanf("%d",&prec);
				lista = inserir_final(lista, cod, prec);
				break;
			}
		
			case 5:{
				exibir_lista(lista);
				break;
			}
		}
	}while(escolha != 7);
	return 0;
}
