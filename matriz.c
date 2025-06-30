#include <stdio.h>

int main(){
	
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,o;
	
	for(i=0;i<3;i++){
		printf("%d \n",mat[0][i]);
	}
		printf("matriz completa \n\n");
	for(o=0;o<3;o++){
		for(i=0;i<3;i++){
		printf("%d ",mat[o][i]);
	}
	printf("\n");
}
}
