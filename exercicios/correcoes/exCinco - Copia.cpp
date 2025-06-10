#include <stdio.h>
#include <stdlib.h>

int bissexto(int ano) {
    return (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));
}

int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return bissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

void somarDias(int *dia, int *mes, int *ano, int opcao) {
    int i;
    if (opcao == 1) {
        for (i = 0; i < 5; i++) {
            (*dia)++;
            if (*dia > diasNoMes(*mes, *ano)) {
                *dia = 1;
                (*mes)++;
                if (*mes > 12) {
                    *mes = 1;
                    (*ano)++;
                }
            }
        }
    } else {
        for (i = 0; i < 5; i++) {
            (*dia)--;
            if (*dia < 1) {
                (*mes)--;
                if (*mes < 1) {
                    *mes = 12;
                    (*ano)--;
                }
                *dia = diasNoMes(*mes, *ano);
            }
        }
    }
}

int main(void) {
    int dia, mes, ano, opcao;

    printf("Digite o dia: ");
    scanf("%i", &dia);

    printf("Digite o mes: ");
    scanf("%i", &mes);

    printf("Digite o ano: ");
    scanf("%i", &ano);

    printf("Quer somar (1) ou diminuir (2) dias? ");
    scanf("%i", &opcao);

    somarDias(&dia, &mes, &ano, opcao);

    printf("A nova data eh: %i/%i/%i\n", dia, mes, ano);

    return 0;
}
