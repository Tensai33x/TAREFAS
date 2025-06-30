#include <stdio.h>
#include <stdlib.h>

struct dados_pessoais{
	char nome[51];
	int idade;
	float peso;
};
typedef struct dados_pessoais dados_pessoais;

int main(){
	
	dados_pessoais pes= {"o", 0, 0.0};
printf("insira os Dados\n\n");	

printf("Nome: ");
scanf("%s", &pes.nome);

printf("Idade: ");
scanf("%d", &pes.idade);

printf("Peso: ");
scanf("%f", &pes.peso);

system("pause");
system("cls");

printf("Nome: %s\n", pes.nome);
printf("Idade: %.2f\n", pes.nome);
printf("Idade: %f\n", pes.nome);
	
	
	
	
}


