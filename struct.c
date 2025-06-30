#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 51

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tip_pes;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	tip_pes pes = {0, 0.0, "test"};
	printf("idade: %d \n", pes.idade);
	printf("peso: %.2f \n", pes.peso);
	printf("nome: %s \n\n", pes.nome);
	
	printf("inseridos direto no codigo \n\n");
	
	pes.idade = 10;
	pes.peso = 70.75;
	strcpy(pes.nome, "NOME");
	
	printf("idade: %d \n", pes.idade);
	printf("peso: %.2f \n", pes.peso);
	printf("nome: %s \n\n", pes.nome);
	
		printf("insira no console \n\n");
		
		scanf("%d", &pes.idade);
		fflush(stdin);
		scanf("%f", &pes.peso);
		fflush(stdin);
		scanf("%s", &pes.nome);
		fflush(stdin);
		system("cls");
		printf("idade: %d \n", pes.idade);
		printf("peso: %.2f \n", pes.peso);
		printf("nome: %s \n\n", pes.nome);
}
