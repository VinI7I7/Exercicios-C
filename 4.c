#include <stdio.h>
#include <string.h>
#include <locale.h>

char  matri [50];
char nome [50];
float p1, p2, p3;

main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o nome do aluno: ");
	scanf("%s", &nome);
	printf("Informe a matr�cula do aluno: ");
	scanf("%s", &matri);
	printf("Informe a 1� nota: ");
	scanf("%f", &p1);
	printf("Informe a 2� nota: ");
	scanf("%f", &p2);
	printf("Informe a 3� nota: ");
	scanf("%f", &p3);
	system("cls");
	
	printf("Nome: %s \n", nome);
	printf("Matr�cula: %s \n", matri);
	printf("Notas: 1� %.1f,  2� %.1f,  3� %.1f", p1, p2, p3);
	
}

