#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, m, i, j, xAnalogimon, xJogador, yAnalogimon, yJogador, menorTempo;

    while (scanf("%d %d", &n, &m) != EOF) {
        int matriz[n][m];

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &matriz[i][j]);

                if (matriz[i][j] == 2) {
                    xAnalogimon = i;
                    yAnalogimon = j;
                }
                if (matriz[i][j] == 1) {
                    xJogador = i;
                    yJogador = j;
                }
            }
        }

        menorTempo = abs(xJogador - xAnalogimon) + abs(yJogador - yAnalogimon);

        printf("%d\n", menorTempo);
    }
    return 0;
}