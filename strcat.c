#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 20

int main(){
	
setlocale(LC_ALL,"portuguese");
		
	char i[N] = {"oi"};
	char o[N] = {"tudo bem?"};
	
	printf("%s \n", i);
	printf("%s\n\n", o);
	
	strcat(i,o);
	puts(i);
	
	
	
	
	
	
	
}
