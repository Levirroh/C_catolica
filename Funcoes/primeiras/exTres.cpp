#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int Soma(int num, int ndois){
	return num + ndois;
}
int Subtracao(int num, int ndois){
	return num - ndois;
}
int Divisao(int num, int ndois){
	return num / ndois;
}
int Multiplicacao(int num, int ndois){
	return num * ndois;
}
int main(void){
	
	float num, ndois, result;
	int operacao;
	
	printf("Digite a operacao que deseja fazer: \n");
	printf("\n 1 -> Soma \n 2 -> Subtracao \n 3 -> Divisao \n 4 -> multiplicacao \n 5 -> Sair \n\n\n");
	scanf("%i", &operacao);
	fflush(stdin);	
	if (operacao == 5){
		return 0;
	}
	printf("\n Digite o primeiro numero: \n");
	scanf("%f", &num);
	fflush(stdin);	
	printf("Digite o segundo numero: \n");
	scanf("%f", &ndois);
	fflush(stdin);	

	switch(operacao){
		case 1:
			result = Soma(num, ndois);
			break;
		case 2:
			result = Subtracao(num, ndois);
			break;
		case 3:
			result = Divisao(num, ndois);
			break;
		case 4:
			result = Multiplicacao(num, ndois);
			break;
		default:
			printf("Voce escolheu uma opcao invalida, REINICIANDO...");
			for (int i = 3; i >= 0; i--){
				printf("\n %i...", i);
				Sleep(1000);
			}	
			main();
	}
	printf("\n\n\n O resultado eh : %.2f", result);

	return 0;
}