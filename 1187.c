#include <stdio.h>

int main() {
    double matriz[12][12];
    int i, j;
    double resultado, soma = 0, cont = 0;
    char operacao[2];

    scanf("%s", operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            if (j > i && j < (11 - i)) soma += matriz[i][j];
        }
    }

    if (operacao[0] == 'S') {
        printf("%.1lf\n", soma);
    }

    else if (operacao[0] == 'M') {
        ;
        printf("%.1lf\n", soma / 30.0);
    }

    return 0;
}