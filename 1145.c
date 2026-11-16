#include <stdio.h>

int main(){
    int x, y, linhas, numero=1;
    scanf("%d %d", &x, &y);
    linhas = y/x;

    for(int idx=0; idx<linhas; idx++){
        for(int idx1=1; idx1<x; idx1++){
            printf("%d ", numero);
            numero++;
        }
        printf("%d\n", numero);
        numero++;
    }
    return 0;
}