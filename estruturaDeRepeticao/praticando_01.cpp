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
			printf("%i \n", i);
		}
	} else {
		printf("Do segundo numero ate o segundo: \n");
		for (j++; j<i; j++){
			printf("%i \n", j);
		}
	};
	
//	 OUTRA FORMA USANDO O WHILE
//	if (i < j){
//		j--;
//		printf("Do primeiro numero ate o segundo: \n");
//		while(i < j){
//			i++;
//			printf("%i \n", i);
//		}
//	} else {
//		i--;
//		printf("Do segundo numero ate o primeiro: \n");
//		while(j < i){
//			j++;
//			printf("%i \n", j);
//		}
//	};
		
	
	return 0;
}