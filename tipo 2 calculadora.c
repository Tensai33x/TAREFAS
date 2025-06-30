#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,fator;
	
	printf("nNumero 1: ");
	scanf("%d",&n1);
	
	printf("\nNumero 2: ");
	scanf("%d",&n2);
	
	printf("\nOperatação: ");
		scanf("%d",&fator);
	
	
	switch(fator){
		
		case '/':{
			fator=n1/n2;
			break;
		}
	printf("\n\n%d",fator);		
	}
		printf("\nResultado: %d\n\n",fator);
	
	
	system("pause");
	
	main();
}
