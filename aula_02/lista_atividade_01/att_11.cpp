#include <stdio.h>
#include <stdlib.h>

int main(void){
	int maquinas, qt_20CV, qt_1CV, qt_5CV, total_pecas;
	float salario_bruto, salario_liquido, preco_20CV, preco_1CV, preco_5CV, total;
	
	printf("Digite quantas maquidas serao compradas : \n");
	scanf("%i", & maquinas);
	fflush(stdin);
	
	qt_20CV = maquinas;
	qt_1CV = maquinas * 2;
	qt_5CV = maquinas * 3;
	
	preco_20CV= qt_20CV * 1500;
	preco_1CV = qt_1CV * 300;
	preco_5CV = qt_5CV * 600;
	
	total_pecas = qt_20CV + qt_1CV + qt_5CV;
	
	total = preco_20CV + preco_1CV + preco_5CV;
		
	printf("A quantidade de motores de 20CV e: %i \n", qt_20CV );
	printf("Preco unitario: %f \n", preco_20CV );
	printf("A quantidade de motores de 1CV e: %i \n", qt_1CV );
	printf("Preco unitario: %f \n", preco_1CV );
	printf("A quantidade de motores de 5CV e: %i \n", qt_5CV );
	printf("Preco unitario: %f \n", preco_5CV );
	printf("O total de pecas compradas e : %i", total_pecas);
	return 0;
}