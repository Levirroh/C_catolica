#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <conio.h>

float Um(void){
	float r=0;
	printf("S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
	for(int i=1, j=1;i<=99;i+=2,j++){
		r+=(float)i/j;
	}
	return r;
}
float Dois(void){
	float r=0;
	printf("S = 1/1 - 2/2 + 3/3 -.......- 10/10\n");
	for(int i=1, j=1;i<=10;i++,j++){
		if(i%2==1){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	return r;
}
float Tres(void){
	float r;
	printf("\n 3 -> 1000/1 + 997/2 + 994/3 ... \n");
	for(int i=1000, j=1, cont=1; cont<=20; i-=3,j++,cont++){
		if(j%2==1){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	return r;
}
float Quatro(void){
	float r;
	printf("\n 4 -> 480/10 - 735-11  + 470/12 ... \n");
	for(int i=480, j=10, cont=1; cont<=20; i-=5,j++,cont++){
		if(j%2==0){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	return r;
}
int main(void){
	
	float result;
	int operacao;
	while (operacao != 5){
		printf("Digite a operacao que deseja fazer: \n");
		printf("\n 1 -> 1/1 + 3/2 + 5/3 ... 99+50 \n");
		printf("\n 2 -> 1/1 + 2/2 + 3/3 ... +10/10 \n");
		printf("\n 3 -> 1000/1 + 997/2 + 994/3 ... \n");
		printf("\n 4 -> 480/10 - 735-11  + 470/12 ... \n");
		printf("\n 5 -> Sair \n\n\n");
		scanf("%i", &operacao);
		fflush(stdin);	
	
		switch(operacao){
			case 1:
				result = Um();
				break;
			case 2:
				result = Dois();
				break;
			case 3:
				result = Tres();
				break;
			case 4:
				result = Quatro();
				break;
			default:
				printf("Voce escolheu uma opcao invalida, DIGITE PARA TERMINAR... \n");
				getch();
				system("cls");
		}
		printf("\n\n\n O resultado eh : %.2f \n", result);
		printf("Digite para continuar!");
		getch();
		system("cls");
	}

	return 0;
}