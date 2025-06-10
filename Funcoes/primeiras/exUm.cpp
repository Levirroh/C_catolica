#include <stdlib.h>
#include <stdio.h>


int ehPar(int num){
	if (num % 2 == 0){
		return 0;
	} 
	return 1;
	
}
int main(void){
	
	int num;
	bool par;
	printf("Digite um numero: \n");
	scanf("%i", &num);
	fflush(stdin);	

	
	if (ehPar(num)){
		printf("IMPAR!!!!");
	} else {
		printf("PAR!!!!");
	}

	return 0;
}
