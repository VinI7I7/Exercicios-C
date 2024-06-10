#include <stdio.h>
#include <locale.h>
float valor;

main(void){
	setlocale(LC_ALL, "");
	printf("Informe o valor da compra: ");
	scanf("%f", &valor);
	
	if ((valor >=0) && (valor <=30)){
		printf("Barato, pode comprar");
	}else{
		if ((valor>30) && (valor<=90)){
			printf("Taxa alta, ao cuidado");
	}else{ 
		if ((valor >90) && (valor<=100)){
			printf("Não compre! \n \n");
		}
	}
}
}
		

