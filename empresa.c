#include <stdio.h>
#include <locale.h>
#include <string.h>

char nome_setor, cod_setor, no_benef1, no_benef2;
int tempo;
double benef1, benef2, total;

main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o c�digo do setor: ");
	fflush(stdin);
	scanf("%c", &cod_setor);
	printf("Informe o nome do setor: ");
	scanf("%s", nome_setor);
	printf("Informe quantos anos tem a empresa: ");
	fflush(stdin);
	scanf("%i", &tempo);
	
	
	printf("Digite o nome do 1� benef�cio: ");
	fflush(stdin);
	scanf("%s", &no_benef1);
	printf("Digite o valor do 1� benef�cio: ");
	fflush(stdin);
	scanf("%d", &benef1);
	
	printf("Agora digite o nome do 2� benef�cio: ");
	fflush(stdin);
	scanf("%s", &no_benef2);
	printf("Digite o valor do 2� benef�cio: ");
	fflush(stdin);
	scanf("%d", &benef2);
	fflush(stdin);
	system("cls");


	total = (benef1 + benef2);

	
	printf("===========INFORMA��ES FINAIS===========\n");
	printf("NOMO DO SETOR: %s\n", &nome_setor);
	printf("C�DIGO DO SETOR: %s\n", &cod_setor);
	printf("TEMPO DA EMPRESA: %i ANOS\n", &tempo);
	printf("VALOR TOTAL DOS BENEF�CIOS: R$ %d ", &total);
	return 0;
	
}
