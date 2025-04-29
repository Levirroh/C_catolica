#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int input, menor, maior;
	
	for (int n = 1; n <= 10; n++){
		
		printf("Digite o %i numero \n", n);
		scanf("%i", &input);
		fflush(stdin);
		
		if (n==1){
			menor = input;
			maior = input;
		} else{
			if (menor > input){
				menor = input;
			}
			if(maior < input) {
				maior = input;
			}
		}
	}
	printf("O menor eh %i \n", menor);
	printf("O maior eh %i \n", maior);
	printf("A diferenca entre os dois eh %i", maior-menor);
	
	
	return 0;
}