#include <stdio.h>

int main(){
    int n, x, y, soma;
    scanf("%d", &n);

    for(int idx=0; idx<n; idx++){
        y = 1;
        soma = 0;
        scanf("%d", &x);
        while(y<x){
            if(x%y == 0) soma += y;
            y++;
        }
        if(soma == x) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }
    return 0;
}