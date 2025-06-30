#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"portuguese" );
	
char str[50];
    float f= 123.45;
    sprintf(str, "%.2f", f);
    printf("A string do float é %s\n", str);
}
