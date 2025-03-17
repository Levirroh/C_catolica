#include <stdio.h>
#include <stdlib.h>

int main(void){
	float nUm, nDois, nTres, nQuatro, media;
	
	printf("Digite a primeira das quatro notas bimestrais: \n");
	scanf("%f", &nUm);
	
	fflush(stdin);
	
	printf("Digite a segunda nota bimestral: \n");
	scanf("%f", &nDois);
	fflush(stdin);
	
	printf("Digite a terceira das quatro notas bimestrais: \n");
	scanf("%f", &nTres);
	
	fflush(stdin);
	
	printf("Digite a ultima nota bimestral: \n");
	scanf("%f", &nQuatro);
	fflush(stdin);	
	
	media = (nUm + nDois + nTres + nQuatro)/4;
	
	printf("A media dos numeros digitados e: %f", media);
	 
	return 0;
}