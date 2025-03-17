#include <stdio.h>
#include <stdlib.h>

int main(void){
	float altura, largura, latas, area, tinta;
	
	printf("Digite a altura em metros da parede a ser pintada : \n");
	scanf("%f", & altura);
	fflush(stdin);
	
	printf("Digite a largura em metros da parede a ser pintada : \n");
	scanf("%f", & largura);
	fflush(stdin);
		
	area = altura * largura;
	
	tinta = area * 3;
	
	latas = tinta / 3.6;
	
	printf("A quantidade de latas de tinta e: %f", latas);
	
	return 0;
}