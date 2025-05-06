#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float mediaCusto, custo, totalGasto;
	int quantidade;
	
	printf("Digite o total de CD's comprados: \n");
	scanf("%i", &quantidade);
	fflush(stdin);
	
	for (int n = 1; n <= quantidade; n++){
		printf("Digite o gasto do %i CD: \n", n);
		scanf("%f", &custo);
		fflush(stdin);
		
		totalGasto += custo;
		
	}
	
	mediaCusto = totalGasto/(float)quantidade;
	
	printf("A media de custo entre todos os CD's eh %f", mediaCusto);
	
	return 0;
}