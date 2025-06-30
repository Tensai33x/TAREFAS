#include <stdio.h>

int main(){

float X, H, O, h, o;

printf("Coloque um numero decimal e receba sua versão e octal e hexa \n\n");
scanf("%f", &X);

H = X;
O = X;

h = H/16;
h/=16;

printf("%.2f", h);


}
