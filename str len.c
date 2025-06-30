#include <stdio.h>
#include <string.h>

int main(){
	
	char i[10];
	int o;	
		scanf("%s", i);
		
		o = strlen(i);
		
		printf("tamanho: %d \n\n", o);
		for(o=0; o<strlen(i); o++){
			
			printf("%c",i[o]);
			
		}
		return 0;
}
