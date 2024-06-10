#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //biblioteca p/ as funções isalpha isdigit toupper tolower
#include <string.h>

char nome[100], end[100];
int idade;
int main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("=================CADASTRO UPA=================\n");
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Digite o seu endereço: ");
	fgets(end, 100, stdin);
	printf("Por fim digite a sua idade: ");
	scanf("%i", &idade);
	
	nome = toupper(nome);
	end = toupper(nome);
}
