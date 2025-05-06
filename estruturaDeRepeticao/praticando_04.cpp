#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float media, nota, totalNota;
	int quantidade;
	
	printf("Digite o total de notas: \n");
	scanf("%i", &quantidade);
	fflush(stdin);
	
	for (int n = 1; n <= quantidade; n++){
		printf("Digite a %i nota: \n", n);
		scanf("%f", &nota);
		fflush(stdin);
		
		totalNota += nota;
	}
	
	media = totalNota/(float)quantidade;
	
	printf("A media entre todas as notas eh %f", media);
	
	return 0;
}