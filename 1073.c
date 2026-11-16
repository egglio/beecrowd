#include <stdio.h>

int main(){
    int valor;
    int idx, cont;
    cont = 0;

    scanf("%d", &valor);
    
    for(idx=1; idx <= valor; idx++){
        if(idx % 2 == 0){
            cont = idx*idx;
            printf("%d^2 = %d\n", idx, cont);
        }
    }

    return 0;
}