#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float mediaAlunos, alunos, totalAlunos;
	int quantidade;
	
	printf("Digite o total de turmas: \n");
	scanf("%i", &quantidade);
	fflush(stdin);
	
	for (int n = 1; n <= quantidade; n++){
		printf("Digite a quantidade de alunos na %i turma: \n", n);
		scanf("%f", &alunos);
		fflush(stdin);
		
		if (alunos > 40){
			printf("Nao pode ter uma turma com mais de 40 alunos, digite novamente!");
			n--;			
		} else{
			totalAlunos += alunos;
		}
		
	}
	
	mediaAlunos = totalAlunos/(float)quantidade;
	
	printf("A media entre todas as turmas eh %f", mediaAlunos);
	
	return 0;
}