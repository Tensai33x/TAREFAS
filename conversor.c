#include <stdio.h>

int main(){
	int r=100,o,XO,ROCHA2=1,vetor[999];
	scanf("%d", &XO);
	
while(r!=0){
	r= XO/8;
	o= XO-r*8;
	XO=r;
	vetor[ROCHA2]=o;
		
	printf("%d ",vetor[ROCHA2]);
	ROCHA2++;
	}
	}
	
	

