#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _produto{
	char nome[50];
	char codigo[20];
	int quantidade;
	float preco;
	
}Produto;

Produto *criar_produto(const char *nome,const char codigo, int quantidade, float preco){
	Produto *p = malloc(sizeof(Produto));
	if(p == NULL){
		printf("erro ao alocar memória");
		exit;
	}
	strcmp(p->nome, nome);
	strcmp(p-> codigo, codigo);
	p-> quantidade = quantidade;
	p-> preco = preco;
	return p;
}

void remove_produto(Produto **produto_remover){
	Produto *produto = *produto_remover;
	free(produto);
	*produto_remover = NULL;
	
}

void display_prod(const Produto *produto){
	printf("Nome: %s\n", produto->nome);
	printf("Codigo: %s\n", produto->codigo);
	printf("Quantidade: %i\n", produto->quantidade);
	printf("Preco: %.2f", produto->preco);
}


int main (void) {
	Produto *p1 = criar_produto("Camisamengudo", "FGDFGDGFW", 25, 500);
	display_prod(p1);
	free(p1);
	display_prod(p1);
		

}
