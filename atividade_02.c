#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	float altura;
	char inicial;

	printf("Digite sua idade: ");
	scanf("%i", &idade);
	fflush(stdin); // limpa para nao ocorrer possiveis erros
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	fflush(stdin); 
	
	printf("Digite a inicial do seu nome: ");
	scanf("%c", &inicial);
	fflush(stdin);

	printf("Idade = %i\n", idade);
	printf("altura = %f\n", altura);
	printf("Inicial = %c\n", inicial);


	return 0;

}
