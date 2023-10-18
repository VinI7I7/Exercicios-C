#include <stdio.h>
#include <string.h>
#include <locale.h>
float altura;

main(void){
	setlocale(LC_ALL, "");
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	printf("Sua altura é: %f", altura);
}
