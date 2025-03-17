#include <stdio.h>
#include <stdlib.h>

int main(void){
	float m, cm;
	
	printf("Digite uma medida em metros para ser transformada em centimetros: \n");
	scanf("%f", &m);
	fflush(stdin);
	
	cm = m*100;
	
	printf("Esta quantidade em centimetros e: %f", cm);
	 
	return 0;
}