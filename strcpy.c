#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 20

int main(){
	setlocale(LC_ALL,"portuguese");
	char s1[N] = {"olá, Mundo!"};
	char s2[N];
	
	puts(s1);
	puts(s2);
	
	strcpy(s2,s1);
	
	puts(s1);
	puts(s2);
	
	
	
}
