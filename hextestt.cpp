#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
setlocale(LC_ALL,"portuguese" );
	int XH;
	int XO;
	int x;
	int r=100;
	int o;
	int ROCHA=1;
	int ROCH=1;
	int vetor[999];
	int octo[999];
	int H;
	int O;
	
	
	scanf("%d[^\n]",&x);
	fflush(stdin);
	XH=x;
	XO=x;
	

	
	while(r!=0){
		
		
	r= XH/16;
	o= XH-r*16;
	XH=r;
	vetor[ROCHA]=o;
		

	ROCHA++;
	}
	ROCHA-=1;
	H=ROCHA;
	
	printf("\nO seu Número convertido para Hexadecimal!\n");
	
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

}
o=0;
r=0;
for(r=100;r!=0;ROCH++){
	
	
	r = XO / 8;
	o = XO-r*8;
	XO=r;
	octo[ROCH] = o;
	
	
}

ROCH-=1;
O=ROCH;
/*
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
*/	
 printf("\n\nO seu Número convertido para Octadecimal!\n");
	
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
	
}
printf("\n\n");
system("pause");
system("cls");
main();
}

