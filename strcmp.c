#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char i[5] = {"opaaa"};
	char o[5];
	int p;
	
	gets(o);
	
	p = strcmp(i,o);
	
	if(p==0)
	
		printf("senha correta");
	
	else
		printf("senha incorreta");
	
	
	
}
