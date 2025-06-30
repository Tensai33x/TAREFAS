#include <stdio.h>

int main2(){
	
	char s[10];
	
	printf("escreva no scanf convencional  \n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("result: %s  \n \n",s);
	
	printf("escreva no scanf aprimorado  \n");
	scanf("%10[viado]s", s);
	fflush(stdin);
	
	printf("result: %s  \n \n",s);
	
	
}
