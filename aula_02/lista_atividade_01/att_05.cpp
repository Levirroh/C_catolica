#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n , x;
	float y, a, b, c;
	 
	printf("Digite um numero inteiro \n");
	scanf("%i", &n);
	fflush(stdin);

	printf("Digite outro numero inteiro \n");
	scanf("%i", &x);
	fflush(stdin);

	printf("Digite um numero com casas decimais usando ponto \n");
	scanf("%f", &y);
	fflush(stdin);
	
	a = ((float)n*2 + (float)x/2);
	b = 3 * (float)n + y;
	c = y * y * y;
	
	printf("Dobro do primeiro mais metade do segundo: %f \n", a);
	printf("A soma do triplo do primeiro com o terceiro: %f \n", b);
	printf("O terceiro elevado ao cubo: %f \n", c);
		
	return 0;
}