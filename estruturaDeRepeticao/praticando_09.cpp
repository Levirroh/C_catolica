#include <stdio.h>
#include <stdlib.h>

int main(void){
	/*
	
	Faça um programa que calcule e mostre a soma dos números pares entre 100 e 
	200 (inclusive). O usuário deve ter a opção de repetir quantas vezes quiser esta 
	operação
*/
	int soma, repetir = 1;
	printf("Os numeros pares entre 100 e 200 (incluindo o 200) eh \n");
	while (repetir != 0){
		for (int n = 100; n <=200; n++){
			if (n%2 == 0){
				soma += n;
				printf("%i \n", soma);
			}
		}
		printf("Voce deseja ver isso novamente? Digite 0 para sair e qualquer outra tecla para continuar");
		scanf("%b", &repetir);
	};
	printf("Tchau!");
	return 0;
}