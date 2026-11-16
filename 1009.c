#include <stdio.h>

int main() {
    char nome[50];
    double salario, vendas, comissao, receber;
    scanf("%s %lf %lf", nome, &salario, &vendas);
    comissao = 0.15 * vendas;
    receber = salario + comissao;
    printf("TOTAL = R$ %.2lf\n", receber);
    return 0;
}