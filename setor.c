#include <stdio.h>
#include <locale.h>

char letra;

main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Escreva uma letra: A, B OU C: ");
	scanf("%c", &letra);
	
	if ((letra == 'A') || (letra == 'a')){
		printf("Bem vindo ao setor Programador");
	}
	else if ((letra == 'B') || (letra == 'b')){
		printf("Bem vindo ao setor BACK END");
	}
	else if ((letra == 'C') || (letra == 'c')){
		printf("Bem vindo ao setor de teste");
	}
	else{
		printf("Letra inválida! Digite A, B OU C");
	}
	return 0;
}
