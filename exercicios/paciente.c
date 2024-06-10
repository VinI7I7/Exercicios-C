#include <stdio.h>
#include <locale.h>

char nome_paciente [50], nome_doutora[50], motivo1[50], motivo2[50], especialidade[50], hora[7], data[12];
int cpf;
float valor1, valor2, total;

main(void){
	setlocale(LC_ALL, "");
	printf("Informe o nome completo do paciente: ");
	fgets(nome_paciente, 50, stdin);
	printf("Digite o seu cpf: ");
	scanf("%i", &cpf);
	printf("Digite o motivo da 1º consulta: ");
	fflush(stdin);
	fgets(motivo1, 50, stdin);
	printf("Digite o valor da 1º consulta: R$ ");
	fflush(stdin);
	scanf("%f", &valor1);
	
	printf("Digite o motivo da 2º consulta: ");
	fflush(stdin);
	fgets(motivo2, 50, stdin);
	printf("Digite o valor da 2º consulta: R$ ");
	fflush(stdin);
	scanf("%f", &valor2);
	
	system("cls");
	
	printf("Informe o nome do(a) Doutor(a): ");
	fflush(stdin);
	fgets(nome_doutora, 50, stdin);
	printf("Informe a especialização: ");
	fflush(stdin);
	fgets(especialidade, 50, stdin);
	printf("Informe a data da consulta(FORMATO DD/MM/AAAA): ");
	fflush(stdin);
	fgets(data, 12, stdin);
	printf("Informe o horário da consulta(FORMATO 00:00): ");
	fflush(stdin);
	fgets(hora, 7, stdin);
		
	system("cls");
	
	total = valor1 + valor2;
	
	printf("===========INFORMAÇÕES FINAIS===============\n");
	printf("PACIENTE: %s\n", &nome_paciente);
	printf("CPF: %i\n", &cpf);
	printf("Nome do(a) doutor(a): %s\n", &nome_doutora);
	printf("ESPECIALIDADE: %s\n", &especialidade);
	printf("Valor total das consultas: R$ %f\n", &total);
	printf("Data e hora da consulta: %s às %s\n", &data, &hora);
	
	
	return 0;

	
}
