#include <stdlib.h>
#include <stdio.h>

int bissexto(int ano) {
    return (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));
}

void somarDias31(int data[3], int opcao){
    int dia = data[0], mes = data[1], ano = data[2];

    if (opcao == 1) {
        for (int i = 0; i < 5; i++) {
            dia++;
            if (dia > 31) {
                dia = 1;
                mes++;
                if (mes > 12) {
                    mes = 1;
                    ano++;
                }
            }
        }
    } else {
        for (int i = 0; i < 5; i++) {
            dia--;
            if (dia < 1) {
                mes--;
                if (mes < 1) {
                    mes = 12;
                    ano--;
                }
                dia = 31;
            }
        }
    }
    data[0] = dia;
    data[1] = mes;
    data[2] = ano;
}
 
void somarDias30(int data[3], int opcao){
    int dia = data[0], mes = data[1], ano = data[2]; 

    if (opcao == 1) {
        for (int i = 0; i < 5; i++) {
            dia++;
            if (dia > 30) {
                dia = 1;
                mes++;
                if (mes > 12) {
                    mes = 1;
                    ano++;
                }
            }
        }
    } else {
        for (int i = 0; i < 5; i++) {
            dia--;
            if (dia < 1) {
                mes--;
                if (mes < 1) {
                    mes = 12;
                    ano--;
                }
                dia = 30;
            }
        }
    }
    data[0] = dia;
    data[1] = mes;
    data[2] = ano;
}

void somarDiasFev(int data[3], int opcao){
    int dia = data[0], mes = data[1], ano = data[2];
    int limite = bissexto(ano) ? 29 : 28;
    if (opcao == 1) {
        for (int i = 0; i < 5; i++) {
            dia++;
            if (dia > limite) {
                dia = 1;
                mes++;
                if (mes > 12) {
                    mes = 1;
                    ano++;
                }
            }
        }
    } else {
        for (int i = 0; i < 5; i++) {
            dia--;
            if (dia < 1) {
                mes--;
                if (mes < 1) {
                    mes = 12;
                    ano--;
                }
                dia = limite;
            }
        }
    }
    data[0] = dia;
    data[1] = mes;
    data[2] = ano;
}

void verificar(int data[3], int opcao){
    int mes = data[1];

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            somarDias31(data, opcao);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            somarDias30(data, opcao);
            break;
        case 2:
            somarDiasFev(data, opcao);
            break;
        default:
            printf("Mes invalido\n");
            break;
    }
}

int main(void){
    int dia, mes, ano, opcao, data[3];

    printf("\nDigite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("Quer somar (1) ou diminuir (2) dias? ");
    scanf("%d", &opcao);

    data[0] = dia;
    data[1] = mes;
    data[2] = ano;

    verificar(data, opcao);

    printf("A data eh: %02d/%02d/%04d\n", data[0], data[1], data[2]);

    return 0;
}
