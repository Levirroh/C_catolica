#include <stdlib.h>
#include <stdio.h>

int somarDias31(int dia, int mes, int ano, int opcao){
	if (opcao == 1){
		// vai somar
		if ((dia + 5) > 31){
			for(int i = 1; i <= 5; i++){
				if ((dia + i) > 31){
					dia = 1;
					mes++;
				}
			}
		}
	} else {
		if ((dia - 5) <= 0){
			for(int i = 5; i <= 1; i--){
				if ((dia + i) < 1){
					dia = 31;
					mes--;
				}
			}
		}
	}
	return [dia, mes, ano];
}
int somarDias30(int dia, int mes, int ano, int opcao){
		if (opcao == 1){
		// vai somar
		if ((dia + 5) > 30){
			for(int i = 1; i <= 5; i++){
				if ((dia + i) > 30){
					dia = 1;
					mes++;
				}
			}
		}
	} else {
		if ((dia - 5) <= 0){
			for(int i = 5; i <= 1; i--){
				if ((dia + i) < 1){
					dia = 30;
					mes--;
				}
			}
		}
	}
	return [dia, mes, ano];
}
int somarDiasFev(int dia, int mes, int ano, int opcao){
	if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 == 1)))
	//29 dias
			if (opcao == 1){
				if ((dia + 5) > 29){
					for(int i = 1; i <= 5; i++){
						if ((dia + i) > 29){
							dia = 1;
							mes++;
						}
					}
				}
			} else {
				if ((dia - 5) <= 0){
					for(int i = 5; i <= 1; i--){
						if ((dia + i) < 1){
							dia = 29;
							mes--;
						}
					}
				}
			}
		return [dia, mes, ano];
	else {
			if (opcao == 1){
			// vai somar
			if ((dia + 5) > 28){
				for(int i = 1; i <= 5; i++){
					if ((dia + i) > 31){
						dia = 1;
						mes++;
					}
				}
			}
		} else {
			if ((dia - 5) <= 0){
				for(int i = 5; i <= 1; i--){
					if ((dia + i) < 1){
						dia = 28;
						mes--;
					}
				}
			}
		}
	}
	return [dia, mes, ano];
}

int verificar(int dia, int mes, int ano, int opcao){
	switch (mes){
		switch (mes) {
		    case 1:
		    case 3:
		    case 5:
		    case 7:
		    case 8:
		    case 10:
		    case 12:
		    	somarDias31(dia, mes, ano, opcao);
		        break;
		    case 4:
		    case 6:
		    case 9:
		    case 11:
		    	somarDias30(dia, mes, ano, opcao);
		        break;
		    case 2:
		        somarDiasFev(dia, mes, ano, opcao);
				break;
		    default:
		        break;
		}
	}
	return [dia, mes, ano];
}

int main(void){
	
	int dia, mes, ano, opcao;
		
	printf("\n Digite o dia: \n");
	scanf("%i", &dia);
	fflush(stdin);	
	printf("Digite o mes: \n");
	scanf("%i", &mes);
	fflush(stdin);	
	printf("Digite o ano: \n");
	scanf("%i", &ano);
	fflush(stdin);
	
	printf("Quer somar (1) ou diminuir (2) dias? \n");
	scanf("%i", &opcao);
	fflush(stdin);

	result[3] = verificar(dia, mes, ano, opcao);
	
	printf("A data eh: %i/%i/%i/", dia, mes, ano);
	return 0;
}