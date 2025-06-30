#include <stdio.h>

int main(){
	int n1,n2,fator;
	printf("numero 1: ");
	scanf("%d",n1);
	
	printf("\nnumero 2: ");
	scanf("%d",n2);
	
	printf("\nOperatação: ");
	switch(fator){
		
		case '/':{
			fator=n1/n2;
			break;
		}
	printf("\n\n%d",fator);		
	}
	
	return 0;
	
	
}
