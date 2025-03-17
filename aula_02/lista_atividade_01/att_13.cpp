#include <stdio.h>
#include <stdlib.h>

int main(void){
	float salario_bruto, IR, INSS, sindicato, salario_liquido;
	
	printf("Digite o seu salario bruto : \n");
	scanf("%f", & salario_bruto);
	fflush(stdin);
	
	IR = salario_bruto * 0.15;
	INSS = salario_bruto * 0.11;
	sindicato = salario_bruto * 0.03;
	salario_liquido = salario_bruto - IR - INSS - sindicato;
	
	printf("(-) IR        __(15%)__: R$ %f", IR);	
	printf("\n (-) INSS      __(11%)__: R$ %f", INSS);
	printf("\n (-) Sindicato __(03%)__: R$ %f", sindicato);
	printf("\n Salario liquido           : R$ %f", salario_liquido);
	
	return 0;
}