#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,j;
	
	printf("Digite o inicio e o fim de uma somatoria separe os numeros com espaco: \n");
	scanf("%i %i", &i, &j);
	fflush(stdin);
	
	
	if (i < j){
		printf("Do primeiro numero ate o segundo: \n");
		for (i++; i<j; i++){
			if(i%2 == 0){
				printf("%i \n", i);
			}
		}
	} else {
		printf("Do segundo numero ate o segundo: \n");
		for (j++; j<i; j++){
			if(j%2 == 0){
				printf("%i \n", j);
			}
		}
	};
	
	return 0;
}