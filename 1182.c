#include <stdio.h>

int main()
{
    double matriz[12][12];
    int coluna, i, j;
    double num, resultado, soma = 0, media = 0;
    char operacao[2];

    scanf("%d", &coluna);
    scanf("%s", operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &num);
            matriz[i][j] = num;
        }
    }

    if (operacao[0] == 'S') {
        j = coluna;
            
        for (i = 0; i < 12; i++) {
            soma += matriz[i][j];
        }
        
        resultado = soma;
    }

    else if (operacao[0] == 'M') {
        j = coluna;
        
        for (i = 0; i < 12; i++) {
            media += matriz[i][j];            
        }
    
        resultado = media/12;
    }

    printf("%.1lf\n", resultado);

    return 0;
}