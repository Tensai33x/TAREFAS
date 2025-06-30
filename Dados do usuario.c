#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2(int argc, char *argv[]) {
	
	int idade;
	float altura, peso;
	char nome[50];
	
	
	printf("Preencha os Dados Do Usuario \n \n");
	
	printf("Idade do Usuario: ");
	scanf("%d", &idade);
	
	printf("Nome do Usuario: ");
	scanf("%s", &nome);
	
	printf("Altura do Usuario: ");
	scanf("%f", &altura);
	
	printf("Peso do Usuario: ");
	scanf("%f", &peso);
	
	printf("\nDADOS DO USUARIO \n");
	printf("Idade: %d \n", idade);
	printf("Nome: %s \n", nome);
	printf("Altura: %.2f \n", altura);
	printf("Peso: %.2f \n", peso);
	return 0;
}
