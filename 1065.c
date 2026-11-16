#include <stdio.h>
 
int main(){
    
    int valor;
    int idx, cont;

    cont = 0;
    
    for(idx=0; idx<5; idx++){
        scanf("%d", &valor);
        if(valor % 2 == 0) cont++;
    }

    printf("%d valores pares\n", cont);
    return 0;
}