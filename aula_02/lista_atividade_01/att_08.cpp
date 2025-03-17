#include <stdio.h>
#include <stdlib.h>

int main(void){
	float numUm, numDois, soma;
	
	printf("Digite um numero: \n");
	scanf("%f", &numUm);
	
	fflush(stdin);
	
	printf("Digite outro numero: \n");
	scanf("%f", &numDois);
	fflush(stdin);
	
	
	soma = numUm + numDois;
	
	printf("A soma dos dois numeros digitados e: %f", soma);
	 
	return 0;
}