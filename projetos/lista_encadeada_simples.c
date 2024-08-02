#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor; //aqui eu poderia escolher qualquer tipo de informação
	struct no *proximo; //criando um ponteiro proximo para linkar cada no da lista
}No;

void inserir_no_inicio(No **lista, int num){
	No *novo = malloc(sizeof(No));
	if(novo){
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	}
	else
		printf("Não foi possível alocar memória!\n");
}

void inserir_no_fim(No **lista, int num){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = NULL;
		if(*lista == NULL) //caso a lista esteja vazia
			*lista = novo;
		else{
			aux = *lista;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
			
		}
	}
	else
		printf("Não foi possível alocar memória!\n");
}

void inserir_no_meio(No **lista, int num, int ant){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		
		if(*lista == NULL){ //lista vazia
			novo->proximo = NULL;
			*lista = novo;
		}
		else{
			aux = *lista;
			//a lista é percorrida enquanto o valor do no for diferente do valor de referencia 'ant'
			//e enquanto proximo for diferente de null
			while(aux->valor != ant && aux->proximo)
				aux = aux->proximo;
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
			
	}
	else
		printf("Não foi possível alocar memória!\n");
}

void inserir_ordenado(No **lista, int num){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		//lista vazia
		if(*lista == NULL){
			novo->proximo = NULL;
			*lista = novo;
		}
		//menor elemento
		else if(novo->valor < (*lista)->valor){
			novo->proximo = *lista;
			*lista = novo;
		}
		else{
			aux = *lista;
			while(aux->proximo && novo->valor > aux->proximo->valor)
				aux = aux->proximo;
			novo->proximo = aux->proximo;
			aux->proximo = novo;	
		}
		
	}
	else
		printf("Não foi possível alocar memória!\n");
}

No *remover(No **lista, int num){
	No *aux, *remover = NULL;
	
	if(*lista){
		if((*lista)->valor == num){
			remover = *lista;
			*lista = remover->proximo;
		}
		else{
			aux = *lista;
			while(aux->proximo && aux->proximo->valor != num)
				aux = aux->proximo;
				if(aux->proximo){
					remover = aux->proximo;
					aux->proximo = remover->proximo;
				}
		}
	}	
	return remover;
}

No *buscar(No **lista, int num){
	No *aux = *lista;
	
	while(aux && aux->valor != num)
		aux = aux->proximo;

	return aux;
}

void imprimir (No *no){	
	if (no){
		printf("\nLista:");
		while(no){		
			printf("%d | ", no->valor);
			no = no->proximo;
		}
	} else
		printf("\nLista Vazia");
	printf("\n\n");
}

int main(){
	int opcao, anterior, valor;
	No *removido, *lista = NULL;
	
	do{
		printf("\n\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no fim\n\t3 - Inserir no meio\n\t4 - Inserir ordenado\n");	
		printf("\t5 - Remover\n\t6 - Imprimir\n\t7 - Buscar\n");	
		scanf("%d", &opcao);
		
		switch(opcao){
		case 1:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir_no_inicio(&lista, valor);
			break;
		case 2:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir_no_fim(&lista, valor);
			break;
		case 3:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			printf("Digite um valor de referencia: ");
			scanf("%d", &anterior);
			inserir_no_meio(&lista, valor, anterior);
			break;
		case 4:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir_ordenado(&lista, valor);
			break;
		case 5:
			printf("Digite um valor para ser removido: ");
			scanf("%d", &valor);
			removido = remover(&lista, valor);
			if(removido){
				printf("Elemento removido: %d\n", removido->valor);
				free(removido); 
			}
			else{
				printf("\nElemento nao encontrado!\n");
			}
			break;
		case 6:
			imprimir(lista);
			break;
		case 7:
			printf("Digite um valor a ser buscado: ");
			scanf("%d", &valor);
			removido = buscar(&lista, valor);
			if(removido)
				printf("O elemento encontrado e: %d\n", removido->valor);
			else
				printf("Elemento nao encontrado\n");
			break;
		default: 
			if(opcao != 0)
				printf("Opcao invalida!\n");			
		}		
	}while(opcao != 0);
	
	return 0;
}
