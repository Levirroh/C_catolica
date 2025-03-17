#include <stdio.h>
#include <stdlib.h>

int main(void){
	float tempC, tempF; 
	printf("Digite uma temperatura em Fahrenheit para ser transformada em Celsius \n");
	scanf("%f", &tempF);
	fflush(stdin);
	
	tempC = 5*(tempF - 32)/9;
	
	printf("Esta temperatura em Celsius e: %f", tempC);
	
	return 0;
}