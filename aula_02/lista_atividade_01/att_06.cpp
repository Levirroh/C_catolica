#include <stdio.h>
#include <stdlib.h>

int main(void){
	float area, raio;
	
	printf("Digite o raio de um circulo para ser calculado sua area: \n");
	scanf("%f", &raio);
	fflush(stdin);
	
	area = 3.14 * (raio*raio);
	
	printf("A area do circulo e: %f", area);
	 
	return 0;
}