#include<stdio.h>
#include<locale.h>

char empresa[20], endereco[40], cnpj[16];
int tel, ddd;
float renda_novos, renda_semi, media, total;

main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o nome da empresa: ");
	fflush(stdin);
	fgets(empresa, 20, stdin);
	printf("Digite o endere�o da empresa: ");
	fflush(stdin);
	fgets(endereco, 40, stdin);
	system("cls");
	
	printf("Agora informe um n�mero de telefone, primeiramente informe o DDD: \n");
	scanf("%i", &ddd);
	printf("Agora o n�mero de telefone: \n");
	scanf("%i", &tel);
	printf("Informe um cnpj: ");
	fflush(stdin);
	fgets(cnpj, 16, stdin);
	system("cls");
	
	printf("Informe a renda do setor de NOVOS: R$ ");
	fflush(stdin);
	scanf("%f", &renda_novos);
	printf("Informe a renda do setor de SEMINOVOS: R$ ");
	scanf("%f", &renda_semi);
	system("cls");
	
	total = (renda_novos + renda_semi);
	media = (renda_novos + renda_semi)/2;
	
	if (total>50000){
		printf("A empresa  � de grande porte");
			
	}else if (total >10000){
		printf("A empresa  � de m�dio porte");
		
	}else if (total > 0){
		printf("A %s � uma micro empresa");
	}
	
	
	printf("\nEmpresa: %s", empresa);
	printf("Endere�o: %s", endereco);
	printf("Telefone: (%i) %i\n", ddd, tel);
	printf("CNPJ: %s\n", cnpj);
	printf("A m�dia dos setores de novos e seminovos foi: R$ %.2f", media);
	

	
	return 0;
	
}
