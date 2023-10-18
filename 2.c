#include <stdio.h>
#include <string.h>  
char nome [50];
int idade;
double salario;

main(void){
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	printf("Informe a sua idade: ");
	scanf("%i", &idade);
	printf("Informe o seu salário: ");
	scanf("%d", &salario);
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("salario: %d \n", salario);
	
}


