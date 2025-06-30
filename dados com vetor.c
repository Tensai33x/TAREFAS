#include <stdio.h>
#include <stdlib.h>
int main1(){
	
	int i[5];
	int o;
	int p = 0;
	
	for(o=0; o<5; o++){
	
	printf("insira seus dados \n");
	scanf("%d", &i[o]);	
	}
	
	for(o=0; o<5; o++){	
	printf("dados : %d \n", i[o]);
	

	}
	
		for(o=0; o<5; o++){	
		p+=i[o];

	}
		system("pause");
	
	printf("Media: %d", p/5);
}
