#include <stdio.h>

int main()
{
    int n, i, j, p1, p2;
    
    while (scanf("%d", &n) != EOF){
    
    p1 = 0;
    p2 = n - 1;
    
    int matriz[n][n];

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                matriz[i][j] = 3;
            }
        }

        for (i = 0; i < n; i++) {
            matriz[i][p1] = 1;
            matriz[i][p2] = 2;
            p1++;
            p2--;
        }
    
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}