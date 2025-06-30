#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define T 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[51];
	
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	tipo_pessoa tip[T];

	for(i=0;i<T;i++){
		printf("\nInsira os dado do Usúario %d \n\n", i+1);
		printf("Idade: ");
		scanf("%d", &tip[i].idade);
		fflush(stdin);
		printf("\nPeso: ");
		scanf("%f", &tip[i].peso);
		fflush(stdin);
		printf("\nNome: ");
		scanf("%s", &tip[i].nome);
		fflush(stdin);
		
		
	}
	system("exit");
	for(i=0;i<T;i++){
		printf("\nDado do Usúario %d \n\n", i+1);
		printf("\nIdade: %d\n", tip[i].idade);
		printf("\nPeso: %.2f\n", tip[i].peso);
		printf("\nNome: %s\n", tip[i].nome);
	
}
}
