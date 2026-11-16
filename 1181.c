#include <stdio.h>

int main()
{
    double matriz[12][12];
    int linha, i, j;
    double num, resultado, soma = 0, media = 0;
    char operacao[2];

    scanf("%d", &linha);
    scanf("%s", operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &num);
            matriz[i][j] = num;
        }
    }

    if (operacao[0] == 'S') {
        i = linha;
            
        for (j = 0; j < 12; j++) {
            soma += matriz[i][j];
        }
        
        resultado = soma;
    }

    else if (operacao[0] == 'M') {
        i = linha;
        
        for (j = 0; j < 12; j++) {
            media += matriz[i][j];            
        }
    
        resultado = media/12;
    }

    printf("%.1lf\n", resultado);

    return 0;
}