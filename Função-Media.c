#include<stdio.h>
#include<stdlib.h>

int main(){
	float n1, n2, ntrab, mediafinal;
		
	printf("Informe a nota da primeira prova ==> ");
	scanf("%f", &n1);
	printf("Informe a segunda nota da prova ==> ");
	scanf("%f", &n2);
	printf("Informe a segunda nota do trabalho ==> ");
	scanf("%f", &ntrab);
	
	mediafinal = medianotas(n1, n2, ntrab);
	
	printf("A media final do aluno foi: %.2f\n\n", mediafinal);
	system("pause");

}


