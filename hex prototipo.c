#include <stdio.h>

int main(){
	int o,n,R,X,i[6] = {0,0,0,0,0,0};
	n=5;
	
	printf("inseri ai o decimal");
	
	Scanf("%d", &X);

for(R=0; X<0; n--){

R = X / 16;
i[n] = X - R*16;
X = R;
}
for(o=0; o<5; o++){	

printf("%d", i[o]);

	}
}
