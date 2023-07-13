#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float valor, desconto, juros;
    int porcentagem;

    setlocale(LC_ALL, "portuguese-brazilian");

    printf("----------------------------\n");
    printf("CALCULADORA DE PORCENTAGENS:\n");
    printf("----------------------------\n");

    printf("Informe o valor: R$");
    scanf("%f", &valor);
    system("cls");

    printf("Informe a porcentagem: ");
    scanf("%d", &porcentagem);
    system("cls");

    desconto = (valor - ((porcentagem * valor) / 100));
    juros = (valor + ((porcentagem * valor) / 100));

    printf("\nR$%.2f com desconto de %d%% é R$%.2f \n", valor, porcentagem, desconto);
    printf("R$%.2f com juros de %d%% é R$%.2f \n", valor, porcentagem, juros);

    printf("-------------------------------------------------------------");
}