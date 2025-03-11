#include <stdio.h>
#include <stdlib.h>

int main()
{
	//minhas variaveis
	// [TIPO [NOME]
	int idade;
	float altura;
	char inicial;


	//Entrada de dados
	// [INSERCAO] [CONTEUDO]

	idade = 18;
	altura = 1.77;
	inicial = 'J';

	// saida de dados
	// funcao printf()
	//printf("[TESTO FORMATADO]. [VARIAVEL])
	printf("Idade = %i\n", idade);
	printf("altura = %f\n", altura);
	printf("Inicial = %c\n", inicial);


	return 0;

}
