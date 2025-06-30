#include <stdio.h>

int main(){
	
	int i[5] = {2,5,7,9,8};
	int o;
	float z = 0;
	
	for(o=0; o<5; o++){
		
		z += i[o];
			
	}
	
	printf("%f",z);
	
}
