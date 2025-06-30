#include <stdio.h>

int main(){
	
	int i;
	
	for(i=1; i <= 10; i++){
		
		if(i == 2 || i==4){	
		continue;
		}
		
		
		printf("%d ", i);
	}
	
	
	
}
