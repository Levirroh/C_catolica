#include <stdlib.h>
#include <stdio.h>


int garantirTriangulo(float ladoA, float ladoB, float ladoC){
	if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) {
		return 1;
    } else {
        return 0;
    }
}
int verificar(float ladoA, float ladoB, float ladoC){
	if (garantirTriangulo(ladoA, ladoB, ladoC)){
		
		if (ladoA == ladoB && ladoA == ladoC)
			return 0;
		else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC)
			return 1;
		return 2;
		
	} else
	return 3;
}

int main(void){
	
	float ladoA, ladoB, ladoC, result;
		
	printf("\n Digite o primeiro lado: \n");
	scanf("%f", &ladoA);
	fflush(stdin);	
	printf("Digite o segundo lado: \n");
	scanf("%f", &ladoB);
	fflush(stdin);	
	printf("Digite o segundo lado: \n");
	scanf("%f", &ladoC);
	fflush(stdin);
	
	
		
	result = verificar(ladoA, ladoB, ladoC);
	if (result == 0)
		printf("O triangulo eh equilatero:");
	else if (result == 1)
		printf("O triangulo eh isosceles:");
	else if (result == 2)
		printf("O triangulo eh escaleno:");
	else 
		printf("Isto nao eh um triangulo");
	return 0;
}