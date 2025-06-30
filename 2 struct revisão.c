#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoais{
	char nome[51];
	int idade;
	float peso;
};
typedef struct dados_pessoais dados_pessoais;

void menu(){

	dados_pessoais pes= {"o", 0, 0.0};
printf("insira os Dados\n\n");	

printf("Nome: ");
scanf("%s", &pes.nome);

printf("Idade: ");
scanf("%d", &pes.idade);

printf("Peso: ");
scanf("%f", &pes.peso);
}	


void revisar(){

int escolha;
dados_pessoais pes;

printf("\nAs informações estão certas ?\n\nse sim digite 1 se não digite 2\n");
scanf("%d", &escolha);


switch(escolha){
	
	case 1:
		system("cls");
		printf("---------------------Seus Dados---------------------");
		printf("\n\t\t\tNome: %s\n", pes.nome);
		printf("\t\t\tIdade: %d\n", pes.idade);
		printf("\t\t\tpeso: %.2f\n", pes.peso);
		printf("----------------------------------------------------");
		break;
		
	case 2:
		printf("\nPreencha novamente\n\n");
		system("pause");
		system("cls");
		menu();
		break;
		


}
		
}

int main(){
	setlocale(LC_ALL, "portuguese");
menu();			
revisar();
		
}


