#include <stdlib.h>
#include <stdio.h>


int imprimir(char c[90], int vezes){
	for(int i = 1; i <= vezes; i++){
		printf("%i - %s \n", i, c);	
	}
	return 0;
}

int main(void){
	
	char c[90];
	int vezes;
	printf("Digite um caractere: \n");
	gets(c);
	fflush(stdin);	
	printf("Digite o tanto de vezes que voce quer mostrar o caractere: \n");
	scanf("%i", &vezes);
	fflush(stdin);	
	
	imprimir(c, vezes);

	return 0;
}