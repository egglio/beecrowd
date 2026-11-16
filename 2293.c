#include <stdio.h>

int main() 
{
    int n, m, i, j, soma = 0, colhidas = 0;

    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for(i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
        if (soma > colhidas) 
            colhidas = soma;
        soma = 0;
    }
    
    for(j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            soma += matriz[i][j];
        }
        if (soma > colhidas) 
            colhidas = soma;
        soma = 0;
    }

    printf("%d\n", colhidas);

    return 0;
}