#include <stdio.h>

int main() {
    double matriz[12][12];
    int i, j;
    double resultado, soma = 0;
    char operacao[2];

    scanf("%s", operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if (i < (11 - j)) soma += matriz[i][j];
        }
    }

    if (operacao[0] == 'S') {
        printf("%.1lf\n", soma);
    }

    else if (operacao[0] == 'M') {
        ;
        printf("%.1lf\n", soma / 66.0);
    }

    return 0;
}