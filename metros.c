#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
	float metros, decimetros, centimetros, milimetros;
	
	
	
	printf("digite um valor em metros: ");
	scanf("%f", &metros);
	
	decimetros = metros*10;
	centimetros = metros*100;
	milimetros = metros*1000;
	
	printf("\n\nmetros convertidos para decímetros: %.2f", decimetros);
	printf("\nmetros convertidos para centímetros: %.2f", centimetros);
	printf("\nmetros convertidos para milímetross: %.2f", milimetros);
	
	return 0;
	
}

