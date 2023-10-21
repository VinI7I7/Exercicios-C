#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char nome[60], email[60], end[70], tel[20], nome_for[60], email_for[60], end_for[70], tel_for[20];
int opcao;

int main(){	
	setlocale(LC_ALL, "");
void cadastrar(){
	
	printf("Digite o nome completo: ");
	fflush(stdin);
	fgets(nome, 60, stdin);
	
	printf("Digite o seu email: ");
	fflush(stdin);
	fgets(email, 60, stdin);
	
	printf("Digite o seu telefone: ");
	fflush(stdin);
	fgets(tel, 20, stdin);
	
	printf("Digite o seu endereço: ");
	fflush(stdin);
	fgets(end, 70, stdin);
	
}

void cadastrar_fornecedor(){
	
	printf("Digite o nome completo do fornecedor: ");
	fflush(stdin);
	fgets(nome_for, 60, stdin);
	
	printf("Digite o email do fornecedor: ");
	fgets(email_for, 60, stdin);
	
	printf("Digite o  telefone: ");
	fgets(tel_for, 20, stdin);
	
	printf("Digite o seu endereço: ");
	fflush(stdin);
	fgets(end_for, 70, stdin);
	
}
void imprimir(){
	system("cls");
	printf("================CADASTRO PET SHOP DA FELICIDADE================\n");
	printf("Nome: %s", nome);
	printf("Email: %s", email);
	printf("Telefone: %s", tel);
	printf("Endereço: %s", end);
}
void imprimir_fornecedor(){
	system("cls");
	printf("================CADASTRO PET SHOP DA FELICIDADE================\n");
	printf("Nome: %s", nome_for);
	printf("Email: %s", email_for);
	printf("Telefone: %s", tel_for);
	printf("Endereço: %s", end_for);
}

    printf("1 - Cadastrar cliente\n");
    printf("2 - Cadastrar fornecedor\n");
    printf("Escolha a uma das opções: ");
    fflush(stdin);
    scanf("%i", &opcao);
    system("cls");
    
    switch(opcao){
    	case 1:
		cadastrar();
		system("cls");
		imprimir();
		break;
		
		case 2: 
		cadastrar_fornecedor();
		system("cls");
		imprimir_fornecedor();
		break;
		
		default:
			printf("Opção inválida!");
		
	}
return 0;
}

