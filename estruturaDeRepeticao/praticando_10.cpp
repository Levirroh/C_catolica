#include <stdio.h>
#include <stdlib.h>

int main(void){

	float base, expoente, total=1;
	printf("Digite a base \n");
	scanf("%f", &base);
	fflush(stdin);
	
	printf("Digite o expoente \n");
	scanf("%f", &expoente);
	fflush(stdin);
	for(int n = 1; n <= expoente; n++){
		total *= base;
	}
	if (expoente == 0){
		total = 1;
	}
	printf("O resultado eh %f", total);
	return 0;
}