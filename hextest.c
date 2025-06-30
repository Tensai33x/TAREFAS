#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese" );
	int XH;
	int XO;
	int x;
	int r=100;
	int o;
	int ROCHA=0;
	int ROCH=0;
	int vetor[999];
	int octo[999];
	int H;
	int O;
	
	
	scanf("%d[^\n]",&x);
	fflush(stdin);
	XH=x;

	

	
	while(r!=0){
		
		
	r= XH/16;
	o= XH-r*16;
	XH=r;
	vetor[ROCHA]=o;
		
printf(" %d ", o);
	ROCHA++;
	}
	ROCHA-=1;
	H=ROCHA;
	
	printf("\nO seu N�mero convertido para Hexadecimal!\n");
	
	while(H!=0){
	switch(vetor[H]){
		
		case 10:	
		printf("A");
		break;
		
		case 11:
		printf("B");
		break;
		
		case 12:	
		printf("C");
		break;
		
		case 13:	
		printf("D");
		break;
		
		case 14:	
		printf("E");
		break;
		
		case 15:	
		printf("F");
		break;
		
		default:
		printf("%d", vetor[H]);
		break;
			
	}
	H--;
	printf("\n");
}
o=0;
XO=x;
r=100;
	while(r!=0){
	r= XO/8;
	o= XO-r*8;
	XO=r;
	octo[ROCH]=o;
		
	printf("%d",octo[ROCH]);
	ROCH++;
	}
	
	ROCH-=1;
	O=ROCH;
	
 printf("\n\nO seu N�mero convertido para Octadecimal!\n");
	
	while(O!=0){
	switch(octo[O]){
		
		case 8:	
		printf("10");
		break;
		
		case 9:
		printf("11");
		break;
		
		case 10:		
		printf("12");
		break;
		
		case 11:	
		printf("13");
		break;
		
		case 12:	
		printf("14");
		break;
		
		case 13:	
		printf("15");
		break;
		
		case 14:	
		printf("16");
		break;
		
		case 15:
		printf("17");
		break;
		
		default:
		printf("%d", octo[O]);
		break;
			
	}
	O--;
	printf("\n");	
}
}

