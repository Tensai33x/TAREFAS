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
		printf("Insira os dado do Usúario %d", i);
		scanf("%d", &tip[i].idade);
		fflush(stdin);
		scanf("%f", &tip[i].peso);
		fflush(stdin);
		scanf("%s", &tip[i].nome);
		fflush(stdin);
		
		
	}
	
	
}
