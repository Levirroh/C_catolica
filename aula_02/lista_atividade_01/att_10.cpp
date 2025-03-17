#include <stdio.h>
#include <stdlib.h>

int main(void){
	int dias;
	float salario_bruto, salario_liquido;
	
	printf("Digite quantos dias voce trabalhou: \n");
	scanf("%i", & dias);
	fflush(stdin);
	
	salario_bruto = dias * 25;
	
	salario_liquido = salario_bruto - (salario_bruto * 0.8);
	
	printf("Seu salario bruto e: %f", salario_bruto);
	printf("Seu salario liquido e: %f", salario_liquido);
	 
	return 0;
}