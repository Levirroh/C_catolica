#include <stdio.h>
#include <stdlib.h>

int main(void){
	float tempC, tempF; 
	printf("Digite uma temperatura em Fahrenheit para ser transformada em Celsius \n");
	scanf("%f", &tempF);
	fflush(stdin);
	
	tempC = 9 * tempF / 5 + 32;
	printf("Esta temperatura em Fahrenheit e: %f", tempC);
	return 0;
}                            