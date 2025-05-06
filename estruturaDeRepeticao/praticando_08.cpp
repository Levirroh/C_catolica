#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float taxaA = 0.030, taxaB = 0.015, paisA = 80000, paisB = 200000;
	int anos;
	
	while (paisA <= paisB){
		paisA += taxaA*paisA;
		paisB += taxaB*paisB;
		anos++;	
	};
	printf("Demorou %i anos", anos);
	return 0;
}