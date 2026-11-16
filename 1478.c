#include <stdio.h>

void printaMatriz(int matriz[100][100], int tamanho);

int main()
{
    int n, i, j;
    int matriz[100][100];

    scanf("%d", &n);

    while (n != 0) {

        for (i = 0; i < n; i++) {
            matriz[i][i] = 1;

            for (j = i + 1; j < n; j++) {
                matriz[i][j] = matriz[i][j-1] + 1;
                matriz[j][i] = matriz[j-1][i] + 1;
            }
        }
        
        printaMatriz(matriz, n);

        scanf("%d", &n);
    }

    return 0;
}

void printaMatriz(int matriz[100][100], int tamanho)
{
    int i, j;
    
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho - 1; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("%3d\n", matriz[i][j]);
    }
    printf("\n");
}