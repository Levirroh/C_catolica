#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float numero;
	
	printf("Digite o numero que deseja ver a tabuada: \n");
	scanf("%f", &numero);
	fflush(stdin);
	
	for (int n = 1; n <= 10; n++){
		printf("%.1f x %i = %.1f \n", numero, n, (float)n*numero);
	}
	return 0;
}