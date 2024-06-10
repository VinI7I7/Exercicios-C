#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

typedef struct no {
	int valor;
	struct no *proximo;
}No;

void inserir_no_inicio(No **lista, int num){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;		
	}
	else
		printf("Erro ao alocar memória!\n");
}

void inserir_no_fim(No **lista, int num){
	No *aux, *novo = malloc(sizeof(No));
	
	if(novo){
		novo->valor = num;
		novo->proximo = NULL;
		
		//caso seja o primeiro
		if(*lista == NULL)//caso a lista esteja vaziaa
			*lista = novo;
		else {
			aux = *lista; //o primeiro no 
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
	}
	else 
		printf("Erro ao alocar memória!\n");
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
	return remover; //retornando o no	
}

No *buscar(No **lista, int num){
	No *aux, *no = NULL;
	
	aux = *lista;
	while(aux && aux->valor != num)
		aux = aux->proximo;
	if (aux){
		no = aux;
	}	
	return no;
}

void imprimir(No *no){
	printf("\n\tLista: ");
	while(no){
		printf("%d ", no->valor);
		no = no->proximo;
	}
	printf("\n\n");
}

int main(void){
	setlocale(LC_ALL,"Portugues");
	
	int opcao, valor;
	No *removido, *lista = NULL;
	
	do{
		printf("\n\t0- Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no final\n\t3 - Remover um no\n\t4 - Imprimir Lista\n\t5 - Buscar\n\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nDigite um valor: ");
				scanf("%d", &valor);
				inserir_no_inicio(&lista, valor);
				break;
			case 2: 
				printf("\nDigite um valor: ");
				scanf("%d", &valor);
				inserir_no_fim(&lista, valor);
				break;
			case 3:
				printf("\nDigite um valor para ser removido: ");
				scanf("%d", &valor);
				removido = remover(&lista, valor);
				if(removido)//diferente de nulo?
				{ 
					printf("\nElemento a ser removido: %d\n", removido->valor);
					free(removido);					
				}
				break;
			case 4:
				imprimir(lista);
				break;
			case 5:
				printf("Digite um valor que deseja buscar: ");
				scanf("%d", &valor);
				removido = buscar(&lista, valor);
				if(removido)
					printf("Elemento encontrado: %d\n", removido->valor);
				else
					printf("Elemento nao encontrado!\n");
				break;
			default:
				if(opcao != 0)
				printf("opcao inválida!\n");
		}
		
	}while(opcao != 0);
	
	return 0;
}
