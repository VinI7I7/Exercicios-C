#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //biblioteca p/ as funções isalpha isdigit toupper tolower
#include <string.h>


char nome[100];
int i;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um nome: ");
	gets(nome);
	
	//converte a string para minúsculo.
	for(i = 0; nome[i]; i++){
	nome[i] = tolower(nome[i]);
	}
	
	printf("Nome em minúsculo: %s\n", nome);
	
	//converte a string para maiúsculo
	for(i = 0; nome[i]; i++){
	nome[i] = toupper(nome[i]);
	}
	printf("Nome em maiúsculo: %s", nome);
		
	return 0;
	
}
